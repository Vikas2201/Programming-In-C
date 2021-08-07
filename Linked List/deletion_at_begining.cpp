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

void insert_beg(node* &head , int val)
{
    node *n = new node(val);

    if(head == NULL)
    {
        head = n;
        return;
    }

    n->next = head;
    head = n;
}

void deletion_beg(node* &head)
{
    if(head == NULL)
    {
        cout<<"Delection does not occurs";
        return;
    }
    node *temp = head;
    if(temp->next == NULL)
    {
        head = NULL;
    }
    else
    {
        head = temp->next;
    }
    
    delete(temp);
}

void print(node *head)
{
    if(head == NULL)
    {
        cout<<"Linked List Does Not Exist";
    }
    node *temp = head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}

int main()
{
    int n;
    cout<<"Enter Number Of Node : ";
    cin>>n;

    int value;
    node* head = NULL;
    for(int i=0;i<n;i++)
    {
        cin>>value;
        insert_beg(head,value);
    }

    cout<<"Our linked list : ";
    print(head);

    cout<<"Linked list after deletion at the begining : ";
    deletion_beg(head);
    print(head);

    return 0;
}