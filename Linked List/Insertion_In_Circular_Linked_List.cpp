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

void Insertion_beg(node* &head,int value)
{
    node* n = new node(value);
    if(head == NULL)
    {
        head = n;
        head->next = n;
        return ;
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
        head = n;
    }
}

void Insertion_end(node* &head,int value)
{
    node* n = new node(value);
    if (head == NULL)
    {
        head = n;
        head->next = n;
        return ;
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
    }
}

void Insertion_after(node* &head,int value,int after_value)
{
    node* n = new node(value);
    if(head == NULL)
    {
        cout<<"Insertion Not Possible";
        return ;
    }
    else
    {
        node* temp = head;
        while(temp->next != head && temp->data != after_value)
        {
            temp = temp->next;
        }
        if(temp->data == after_value)
        {
            n->next = temp->next;
            temp->next = n;
            return ;
        }
        else
        {
            cout<<"List Does Not Contain Value";
            return ;
        }
    }
}

void Insertion_before(node* &head,int value,int before_value)
{
    node* n = new node(value);
    if (head == NULL)
    {
        cout<<"Insertion Not Possible";
        return ;
    }
    else
    {
        node* temp = head;
        node* pre_temp = NULL;
        while(temp->next != head && temp->data != before_value)
        {
            pre_temp = temp;
            temp = temp->next;
        }
        if(temp->data == before_value)
        {
            if(pre_temp == NULL)
            {
                Insertion_beg(head,value);
                return ;
            }
            else
            {
                n->next = temp;
                pre_temp->next = n;
                return ;
            }
        }
        else
        {
            cout<<"List Does Not Contain Before Value";
            return;
        }
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
    cout<<temp->data<<"->NULL"<<endl;
}

int main()
{
	int value; 
	int choice;
	node* head = NULL;
	while(1)
	{
		cout<<"\nour option will be :";
		cout<<"\n1. Insert a node at the beginning ";
		cout<<"\n2. Insert a node at the end ";
        cout<<"\n3. Insert after a certain node ";
        cout<<"\n4. Insert before a certain node ";
		cout<<"\n5. Print linked list ";
		cout<<"\n6. Exit ";
		cout<<"\nEnter your choice : ";                  
		cin>>choice;
		switch(choice)
		{
		    case 1:
			{
				cout<<"\nEnter a value for inserting at the beginning : ";
				cin>>value;
				Insertion_beg(head,value);
				break;
			}	
            case 2:
			{
				cout<<"\nEnter a value for inserting at the end : ";
				cin>>value;
                Insertion_end(head,value);
				break;
			}
            case 3:
            {
                cout<<"\nEnter a value for insertion after a certain node : ";
                cin>>value;

                int after_value;
                cout<<"Enter after node value : ";
                cin>>after_value;

                Insertion_after(head,value,after_value);
                break;
            }
            case 4:
            {
                cout<<"\nEnter a value for insertion before a certain node : ";
                cin>>value;

                int before_value;
                cout<<"Enter after node value : ";
                cin>>before_value;

                Insertion_before(head,value,before_value);
                break;
            }
			case 5:
			{
				print(head);
				break;
			}		
			case 6:
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