#include<bits/stdc++.h>
using namespace std;

class node
{
    public:
        int data;
        node* prev;
        node* next;

        node(int value)
        {
            data = value;
            prev = NULL;
            next = NULL;
        }
};

void Insertion_beg(node* &head , int value)
{
    node* n = new node(value);
    if(head == NULL)
    {
        head = n;
        return;
    }
    else
    {
        head->prev = n;
        n->next = head;
        head = n;
    }
}

void Insertion_end(node* &head,int value)
{
    node* n = new node(value);
    if(head == NULL)
    {
        head = n;
    }
    else
    {
        node* temp = head;
        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        n->prev = temp;
        temp->next = n;
    }
}

void Insertion_after(node* &head , int value , int after_value)
{
    node* n = new node(value);
    if(head == NULL)
    {
        cout<<"\nLINKED LIST IS EMPTY";
        return ;
    }
    else
    {
        node* temp = head;
        while(temp != NULL && temp->data != after_value)
        {
            temp = temp->next;
        }
        if(temp == NULL)
        {
            cout<<"\nNO NODE PRESENT WITH THIS VALUE";
            return ;
        }
        else
        {
            if(temp->next == NULL)
            {
                temp->next = n;
                n->prev = temp;
            }
            else
            {
                n->next = temp->next;
                n->prev = temp;
                temp->next->prev = n;
                temp->next = n;
            }
        }
    }
}

void Insertion_before(node* &head,int value,int before_value)
{
    node* n = new node(value);
    if(head == NULL)
    {
        cout<<"\nLINKED LIST IS EMPTY";
        return ;
    }
    else
    {
        node* temp = head;
        while(temp != NULL && temp->data != before_value)
        {
            temp = temp->next;
        }
        if(temp != NULL)
        {
            cout<<"\nNO NODE EXIST WITH THIS VALUE IN LINKED LIST";
            return ;
        }
        else
        {
                n->next =  temp;
                n->prev = temp->prev;
                temp->prev->next = n;
                temp->prev = n;
        }
    }
}

void Insertion_between(node* &head,int value,int v1 , int v2)
{
    node* n = new node(value);
    if(head == NULL)
    {
        cout<<"\nLINKED LIST IS EMPTY";
        return ;
    }
    else
    {
        node* temp = head;
        while(temp != NULL && (temp->data != v1 && temp->next->data != v2))
        {
            temp = temp->next;
        }
        if(temp == NULL)
        {
            cout<<"\nNO NODES PRESENT WITH THIS VALUES IN LINKED LIST";
            return ;
        }
        else
        {
            n->next = temp->next;
            n->prev = temp;
            temp->next->prev = n;
            temp->next = n;
        }
    }
}

void print(node* head)
{
    if(head == NULL)
    {
        cout<<"\nLINKED LIST DOES NOT EXIST";
        return ;
    }
    else
    {
        node* temp = head;
        while(temp != NULL)
        {
            cout<<temp->data<<"->";
            temp = temp->next;
        }
        cout<<"NULL"<<endl;
    }
}

int main()
{
    int choice;
    int value;
    node* head = NULL;
    while(1)
    {
        cout<<"\nOUR CHOICE : ";
        cout<<"\n1. INSERTION AT THE BEGINING ";
        cout<<"\n2. INSERTION AT THE END ";
        cout<<"\n3. INSERTION AFTER A CERTAIN NODE ";
        cout<<"\n4. INSERTION BEFORE A CERTAIN NODE ";
        cout<<"\n5. INSERTION BETWEEN TWO NODES ";
        cout<<"\n6. PRINT LINKED LIST ";
        cout<<"\n7. EXIT ";
        cout<<"\nENTER YOUR CHOICE : ";
        cin>>choice;

        switch(choice)
        {
            case 1:
            {
                cout<<"\nENTER VALUE FOR INSERTION : ";
                cin>>value;

                Insertion_beg(head,value);
                break;
            }
            case 2:
            {
                cout<<"\nENTER VALUE FOR INSERTION : ";
                cin>>value;

                Insertion_end(head,value);
                break;
            }
            case 3:
            {
                cout<<"\nENTER VALUE FOR INSERTION : ";
                cin>>value;

                int after_value;
                cout<<"\nENTER VALUE AFTER WHICH NODE U WANT TO INSERT A VALUE : ";
                cin>>after_value;

                Insertion_after(head,value,after_value);
                break;
            }
            case 4:
            {
                cout<<"\nENTER VALUE FOR INSERTION : ";
                cin>>value;

                int before_value;
                cout<<"\nENTER VALUE BEFORE WHICH NODE U WANT TO INSERT A VALUE : ";
                cin>>before_value;

                Insertion_before(head,value,before_value);
                break;
            }
            case 5:
            {
                cout<<"\nENTER VALUE FOR INSERTION : ";
                cin>>value;

                int v1 , v2;
                cout<<"\nENTER NODE VALUES BETWEEN WHICH U WANT TO INSERT A VALUE : ";
                cin>>v1>>v2;

                Insertion_between(head,value,v1,v2);
                break;
            }
            case 6:
            {
                cout<<"\nOUR LINKED LIST : ";
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
                cout<<"\nENTER CORRECT CHOICE";
                break;
            }
        }
    }
    return 0;
}
