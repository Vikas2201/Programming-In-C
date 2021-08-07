#include<bits/stdc++.h>
using namespace std;

class node
{
    public:
        int data;
        node *next;

        node(int value)
        {
            data = value;
            next = NULL;
        } 
};

void insert_beg(node* &head,int value)
{
    node *n = new node(value);
    
    if(head == NULL)
    {
        head = n;
        return ;
    }
    else
    {
        n->next = head;
        head = n;
    }
} 

void insert_end(node* &head , int value)
{
    node * n = new node(value);
    if(head == NULL)
    {
        head = n;
        return;
    }
    else
    {
        node* temp = head;
        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = n;
    }
}

void insert_after(node* &head , int value , int after_value)
{
    node * n = new node(value);
    if(head == NULL)
    {
        head = n;
        cout<<"INSERTION AFTER A CERTAIN VALUE NOT POSSIABLE";
        return;
    }
    else
    {
        node *temp = head;
        while(temp != NULL && temp->data != after_value)
        {
            temp = temp->next;
        }
        if(temp == NULL)
        {
            cout<<"NO NODE PRESENT WITH THIS VALUE IN LINKED LIST";
            return;
        }
        else
        {
            n->next = temp->next;
            temp->next = n;
        }
    }
}

void insert_before(node* &head, int value , int before_value)
{
    node* n = new node(value);
    if(head == NULL)
    {
        head = n;
        cout<<"INSERTION BEFORE A CERTAIN VALUE NOT POSSIABLE";
        return ;
    }
    else
    {
        node* temp = head;
        node* pre_temp = NULL;
        while(temp != NULL && temp->data != before_value)
        {
            pre_temp = temp;
            temp = temp->next;
        }
        if(temp == NULL)
        {
            cout<<"NO NODE PRESENT WITH THIS VALUE IN LINKED LIST";
            return ;
        }
        else if(pre_temp == NULL)
        {
            n->next = head;
            head = n;
        }
        else
        {
            n->next = temp;
            pre_temp->next = n;
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
    while(temp != NULL)
    {
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
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
				insert_beg(head,value);
				break;
			}	
            case 2:
			{
				cout<<"\nEnter a value for inserting at the end : ";
				cin>>value;
                insert_end(head,value);
				break;
			}
            case 3:
            {
                cout<<"\nEnter a value for insertion after a certain node : ";
                cin>>value;

                int after_value;
                cout<<"Enter after node value : ";
                cin>>after_value;

                insert_after(head,value,after_value);
                break;
            }
            case 4:
            {
                cout<<"\nEnter a value for insertion before a certain node : ";
                cin>>value;

                int before_value;
                cout<<"Enter after node value : ";
                cin>>before_value;

                insert_before(head,value,before_value);
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