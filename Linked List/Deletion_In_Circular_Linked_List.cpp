#include<bits/stdc++.h>
using namespace std;

class node
{
    public:
        int data;
        node* next;

        node(int value)
        {
            data = value;
            next = NULL;
        }
};

void Insertion(node* &head , int value)
{
    node* n = new node(value);
    if(head == NULL)
    {
        head = n;
        head->next = n;
        return;
    }
    else
    {
        node* temp = head;
        while(temp->next != head)
        {
            temp = temp->next;
        }
        temp->next = n;
        n->next = head;
        return ;
    }
}

void Deletion_beg(node* &head)
{
    if(head == NULL)
    {
        cout<<"UNDERFLOW OCCURS";
        return;
    }
    else
    {
        node* temp = head;
        node* new_head = head;
        if(temp->next == head)
        {
            delete(temp);
            head = NULL;
            return;
        }
        else
        {
            while(temp->next != head)
            {
                temp = temp->next;
            }
            temp->next = new_head->next;
            head = new_head->next;
            delete(new_head);
            return;
        }
    }
}

void Deletion_end(node* &head)
{
    if(head == NULL)
    {
        cout<<"UNDERFLOW OCCURS";
        return;
    }
    else
    {
        node* temp = head;
        node* pre_temp = NULL;
        while(temp->next != head)
        {
            pre_temp = temp;
            temp = temp->next;
        } 
        if(pre_temp == NULL)
        {
            delete(temp);
            head = NULL;
            return;
        }
        else
        {
            pre_temp->next = temp->next;
            delete(temp);
            return;
        }
    }
}

void Deletion_after(node* &head,int after_value)
{
    if(head == NULL)
    {
        cout<<"UNDERFLOW OCCURS";
        return ;
    }
    else
    {
        node* temp = head;
        node* post_temp = temp->next;
        while(temp->next != head && temp->data != after_value)
        {
            temp = temp->next;
            post_temp = temp->next;
        }
        if(temp == head && temp->data == after_value)
        {
            cout<<"NO NODE PRESENT AFTER IT";
            return ;
        }
        else if(temp->data == after_value)
        {
            temp->next = post_temp->next;
            delete(post_temp);
            return ;
        }
        else
        {
            cout<<"LIST DOES NOT CONTAIN AFTER NODE VALUE";
            return ;
        }
    }
}

void Deletion_pos(node* head , int pos)
{
    if(pos == 1)
    {
        Deletion_beg(head);
        return ;
    }
    else
    {
        node* temp = head;
        int count = 1;
        while(count != pos)
        {
            temp = temp->next;
            count++;
        }
        node* todelete = temp->next;
        temp->next = temp->next->next;
        delete(todelete);
        return ;
    }
}

void print(node* head)
{
    if(head == NULL)
    {
        cout<<"LINKED LIST DOES NOT EXIST";
        return;
    }
    node* temp = head;
    while(temp->next != head)
    {
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<temp->data<<"-> NULL"<<endl;
}

int main()
{
	int value; 
	int choice;
	node* head = NULL;
	while(1)
	{
		cout<<"\nour option will be :";
		cout<<"\n1. Insertion in circular linked list ";
        cout<<"\n2. Delete a node at the begining of linked list ";
		cout<<"\n3. Delete a node at the end ";
        cout<<"\n4. Delete a node after a certain node ";
        cout<<"\n5. Delete a Specific Position node ";
		cout<<"\n6. Print linked list ";
		cout<<"\n7. Exit ";
		cout<<"\nEnter your choice : ";                  
		cin>>choice;
		switch(choice)
		{
		    case 1:
			{
				cout<<"\nEnter a value for insertion  : ";
				cin>>value;
				Insertion(head,value);
				break;
			}	
            case 2:
			{
                Deletion_beg(head);
				break;
			}
            case 3:
            {
                Deletion_end(head);
                break;
            }
            case 4:
            {
                int after_value;
                cout<<"Enter after node value : ";
                cin>>after_value;

                Deletion_after(head,after_value);
                break;
            }
            case 5:
            {
                int pos;
                cout<<"Enter Position of node that u want to delete : ";
                cin>>pos;

                Deletion_pos(head,pos);
                break;
            }
			case 6:
			{
				print(head);
				break;
			}		
			case 7:
			{
				exit(1);
				break;
			}
			default:
			{
				cout<<"\nEnter correct choice :";
				break;
			}
		}
	}
}