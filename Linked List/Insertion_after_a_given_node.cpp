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

void insert_after(int value,node* &head,int after_value)
{
    node* n = new node(value);
    if(head == NULL)
    {
        head = n;
        cout<<"Operation does not possible";
        return;
    }

    node *temp = head;
    while(temp !=NULL && temp->data!=after_value)
    {
        temp= temp->next;
    }
    if(temp ==NULL)
    {
        cout<<"No node parsent in linked list with this value";
    }
    else
    {
        n->next = temp->next;
        temp->next = n;
    }
}

void print(node* head)
{
    if(head == NULL)
    {
        cout<<"Linked list does not exit";
    }
    node *temp = head;
    while(temp != NULL)
    {
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}

int main()
{
    int n;
    cout<<"Enter number of node : ";
    cin>>n;

    int value;
    node *head = NULL;
    for(int i=0;i<n;i++)
    {
        cin>>value;
        insert_end(head,value);
    }

    cout<<"Values in linked list : ";
    print(head);


    cout<<"Enter value which u want to insert after a certin node : ";
    cin>>value;

    int v1;
    cout<<"Enter Node value : ";
    cin>>v1;

    insert_after(value,head,v1);

    cout<<"After insertion linked list : ";
    print(head);

    return 0;
}