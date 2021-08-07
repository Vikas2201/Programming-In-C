#include<bits/stdc++.h>
using namespace std;

class node
{
    public:
        int data;
        node* next;

        node(int value)
        {
            data=value;
            next = NULL;
        }
};

void insert_end(node* &head,int value)
{
    node* n = new node(value);
    
    if(head == NULL)
    {
        head = n;
        return ;
    }

    node *temp = head;
    while(temp->next !=NULL)
    {
        temp=temp->next;
    }
    temp->next=n;
}

void insert_between(int value,node* &head , int v1 , int v2)
{
    node *n = new node(value);
    
    if(head == NULL)
    {
        head = n;
        cout<<value<<" does not insert b/w "<<v1<<" and "<<v2<<" because list does not exit";
        return ;
    }
    
    node *temp = head;
    while(temp->next != NULL)
    {
        if(temp->data == v1 && temp->next->data == v2)
        {
            n->next = temp->next;
            temp->next = n;
        }
        temp = temp->next;
    }
}

void print(node* head)
{
    if(head == NULL)
    {
        cout<<"List does not exit";
        return ;
    }
    node *temp = head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

int main()
{
    int n;
    cout<<"Enter Number of nodes : ";
    cin>>n;

    node *head = NULL;
    int  value;

    for(int i=0;i<n;i++)
    {
        cin>>value;
        insert_end(head,value);
    }

    cout<<"Our linked list : ";
    print(head);

    cout<<"Enter value which u want to insert between two nodes : ";
    cin>>value;

    int v1 , v2;
    cout<<"Enter befor value : ";
    cin>>v1;

    cout<<"Enter after value : ";
    cin>>v2;

    insert_between(value,head,v1,v2);
    cout<<"After Insertion our list : ";
    print(head);

    return 0;
}