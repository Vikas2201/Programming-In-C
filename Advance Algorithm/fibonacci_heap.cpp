#include <iostream>
using namespace std;

struct node {
private:
	node* prev;
	node* next;
	node* child;
	node* parent;
	int value;
	int degree;
	bool marked;
public:
	friend class FibonacciHeap;
	node* getPrev() {return prev;}
	node* getNext() {return next;}
	node* getChild() {return child;}
	node* getParent() {return parent;}
	int getValue() {return value;}
	bool isMarked() {return marked;}

	bool hasChildren() {return child;}
	bool hasParent() {return parent;}
};

class FibonacciHeap {
protected:
	node* heap;
public:

	FibonacciHeap() {
		heap=_empty();
	}
	virtual ~FibonacciHeap() {
		if(heap) {
			_deleteAll(heap);
		}
	}
	node* insert(int value) {
		node* ret=_singleton(value);
		heap=_merge(heap,ret);
		return ret;
	}
	void merge(FibonacciHeap& other) {
		heap=_merge(heap,other.heap);
		other.heap=_empty();
	}

	bool isEmpty() {
		return heap==nullptr;
	}

	int getMinimum() {
		return heap->value;
	}

	int removeMinimum() {
		node* old=heap;
		heap=_removeMinimum(heap);
		int ret=old->value;
		delete old;
		return ret;
	}

    void removeKey(int k) {
        node* n = find(k);
        if (n != nullptr) {
            decreaseKey(n, INT_MIN);
            removeMinimum();
        }
    }

	void decreaseKey(node* n,int value) {
		heap=_decreaseKey(heap,n,value);
	}

	node* find(int value) {
		return _find(heap,value);
	}
private:
	node* _empty() {
		return NULL;
	}

	node* _singleton(int value) {
		node* n=new node();
		n->value=value;
		n->prev=n->next=n;
		n->degree=0;
		n->marked=false;
		n->child=NULL;
		n->parent=NULL;
		return n;
	}

	node* _merge(node* a,node* b) {
		if(a==NULL)return b;
		if(b==NULL)return a;
		if(a->value>b->value) {
			node* temp=a;
			a=b;
			b=temp;
		}
		node* an=a->next;
		node* bp=b->prev;
		a->next=b;
		b->prev=a;
		an->prev=bp;
		bp->next=an;
		return a;
	}

	void _deleteAll(node* n) {
		if(n!=NULL) {
			node* c=n;
			do {
				node* d=c;
				c=c->next;
				_deleteAll(d->child);
				delete d;
			} while(c!=n);
		}
	}
	
	void _addChild(node* parent,node* child) {
		child->prev=child->next=child;
		child->parent=parent;
		parent->degree++;
		parent->child=_merge(parent->child,child);
	}

	void _unMarkAndUnParentAll(node* n) {
		if(n==NULL)return;
		node* c=n;
		do {
			c->marked=false;
			c->parent=NULL;
			c=c->next;
		}while(c!=n);
	}

	node* _removeMinimum(node* n) {
		_unMarkAndUnParentAll(n->child);
		if(n->next==n) {
			n=n->child;
		} else {
			n->next->prev=n->prev;
			n->prev->next=n->next;
			n=_merge(n->next,n->child);
		}
		if(n==NULL)return n;
		node* trees[64]={NULL};
		
		while(true) {
			if(trees[n->degree]!=NULL) {
				node* t=trees[n->degree];
				if(t==n)break;
				trees[n->degree]=NULL;
				if(n->value<t->value) {
					t->prev->next=t->next;
					t->next->prev=t->prev;
					_addChild(n,t);
				} else {
					t->prev->next=t->next;
					t->next->prev=t->prev;
					if(n->next==n) {
						t->next=t->prev=t;
						_addChild(t,n);
						n=t;
					} else {
						n->prev->next=t;
						n->next->prev=t;
						t->next=n->next;
						t->prev=n->prev;
						_addChild(t,n);
						n=t;
					}
				}
				continue;
			} else {
				trees[n->degree]=n;
			}
			n=n->next;
		}
		node* min=n;
		node* start=n;
		do {
			if(n->value<min->value)min=n;
			n=n->next;
		} while(n!=start);
		return min;
	}

	node* _cut(node* heap,node* n) {
		if(n->next==n) {
			n->parent->child=NULL;
		} else {
			n->next->prev=n->prev;
			n->prev->next=n->next;
			n->parent->child=n->next;
		}
		n->next=n->prev=n;
		n->marked=false;
		return _merge(heap,n);
	}

	node* _decreaseKey(node* heap,node* n,int value) {
		if(n->value<value)return heap;
		n->value=value;
		if(n->parent) {
			if(n->value<n->parent->value) {
				heap=_cut(heap,n);
				node* parent=n->parent;
				n->parent=NULL;
				while(parent!=NULL && parent->marked) {
					heap=_cut(heap,parent);
					n=parent;
					parent=n->parent;
					n->parent=NULL;
				}
				if(parent!=NULL && parent->parent!=NULL)parent->marked=true;
			}
		} else {
			if(n->value < heap->value) {
				heap = n;
			}
		}
		return heap;
	}

	node* _find(node* heap,int value) {
		node* n=heap;
		if(n==NULL)return NULL;
		do {
			if(n->value==value)return n;
			node* ret=_find(n->child,value);
			if(ret)return ret;
			n=n->next;
		}while(n!=heap);
		return NULL;
	}
};

int main() {
    int arr[10] = {5, 3, 2, 1, 4, 6, 7, 8, 9, 10};
    FibonacciHeap fh;
    for (int i = 0; i < 10; i++) {
        cout << "inserting " << arr[i] << endl;
        fh.insert(arr[i]);
    }
    for(int i = 0; i<5; i++) {
        int del;
        cout << "enter key to delete :" << endl;
        cin >> del;
        fh.removeKey(del);
    }
    for(int i = 0; i<5; i++) {
        cout << "min: " << fh.getMinimum() << endl;
        fh.removeMinimum();
        cout << "extracted min" << endl;
    }

}