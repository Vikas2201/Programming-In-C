/* Implementation of binomial heap */

#include<bits/stdc++.h>
using namespace std;

struct node
{
  int data, degree;
  node *child, *sibling, *parent;
};

node* newNode(int key)
{
  node *temp = new node;
  temp->data = key;
  temp->degree = 0;
  temp->child = temp->parent = temp->sibling = NULL;
  return temp;
}

node* mergeBinomialTrees(node *b1, node *b2)
{
  if(b1->data > b2->data)
    swap(b1, b2);

  b2->parent = b1;
  b2->sibling = b1->child;
  b1->child = b2;
  b1->degree++;

  return b1;
}

list<node*> unionBionomialHeap(list<node*> l1,list<node*> l2)
{
  list<node*> _new;
  list<node*>::iterator it = l1.begin();
  list<node*>::iterator ot = l2.begin();
  while (it!=l1.end() && ot!=l2.end())
  {
    if((*it)->degree <= (*ot)->degree)
    {
      _new.push_back(*it);
      it++;
    }
    else
    {
      _new.push_back(*ot);
      ot++;
    }
  }

  while (it != l1.end())
  {
    _new.push_back(*it);
    it++;
  }

  while (ot!=l2.end())
  {
    _new.push_back(*ot);
    ot++;
  }
  
  return _new;
}

list<node*> adjust(list<node*> _heap)
{
  if (_heap.size() <= 1)
    return _heap;
  list<node*> new_heap;
  list<node*>::iterator it1,it2,it3;
  it1 = it2 = it3 = _heap.begin();

  if (_heap.size() == 2)
  {
    it2 = it1;
    it2++;
    it3 = _heap.end();
  }
  else
  {
    it2++;
    it3=it2;
    it3++;
  }
  while(it1 != _heap.end())
  {
    if(it2 == _heap.end())
      it1++;

    else if((*it1)->degree < (*it2)->degree)
    {
      it1++;
      it2++;
      if(it3!=_heap.end())
        it3++;
    }

    else if (it3!=_heap.end() && (*it1)->degree == (*it2)->degree && (*it1)->degree == (*it3)->degree)
    {
      it1++;
      it2++;
      it3++;
    }

    else if ((*it1)->degree == (*it2)->degree)
    {
      node *temp;
      *it1 = mergeBinomialTrees(*it1,*it2);
      it2 = _heap.erase(it2);
      if(it3 != _heap.end())
        it3++;
    }
  }
  return _heap;
}

list<node*> insertATreeInHeap(list<node*> _heap,node *tree)
{
  list<node*> temp;
  temp.push_back(tree);
  temp = unionBionomialHeap(_heap,temp);
  return adjust(temp);
}

list<node*> removeMinFromTreeReturnBHeap(node *tree)
{
  list<node*> heap;
  node *temp = tree->child;
  node *lo;

  while (temp)
  {
    lo = temp;
    temp = temp->sibling;
    lo->sibling = NULL;
    heap.push_front(lo);
  }
  return heap;
}

list<node*> insert(list<node*> _head, int key)
{
  node *temp = newNode(key);
  return insertATreeInHeap(_head,temp);
}

node* getMin(list<node*> _heap)
{
  list<node*>::iterator it = _heap.begin();
  node *temp = *it;
  while (it != _heap.end())
  {
    if ((*it)->data < temp->data)
      temp = *it;
      it++;
  }
  return temp;
}

list<node*> extractMin(list<node*> _heap)
{
  list<node*> new_heap,lo;
  node *temp;

  temp = getMin(_heap);
  list<node*>::iterator it;
  it = _heap.begin();
  while (it != _heap.end())
  {
    if(*it != temp)
    {
      new_heap.push_back(*it);
    }
    it++;
  }
  lo = removeMinFromTreeReturnBHeap(temp);
  new_heap = unionBionomialHeap(new_heap,lo);
  new_heap = adjust(new_heap);
  return new_heap;
}

void printTree(node *h)
{
  while (h)
  {
    cout << h->data << " ";
    printTree(h->child);
    h = h->sibling;
  }
}

void printHeap(list<node*> _heap)
{
  list<node*> ::iterator it;
  it = _heap.begin();
  while (it != _heap.end())
  {
    printTree(*it);
    it++;
  }
}

int main()
{
  int ch,key;
  list<node*> _heap;

  _heap = insert(_heap,20);
  _heap = insert(_heap,40);
  _heap = insert(_heap,60);

  cout << "Heap after insertion:\n";
  printHeap(_heap);

  node *temp = getMin(_heap);
  cout << "\nMinimum element of Heap : "<< temp->data << "\n";

  _heap = extractMin(_heap);
  cout << "Heap after deletion of minimum element\n";
  printHeap(_heap);

  return 0;
}