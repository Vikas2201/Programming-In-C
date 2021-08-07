#include<bits/stdc++.h>
using namespace std;

class node
{
    public:
        int data;
        node * next;

        node(int val)
        {
            data = val;
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

void print(node *head)
{
    if(head == NULL)
    {
        cout<<"Linked list does not exit";
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
    cout<<"Enter Number of nodes : ";
    cin>>n;
    int value;
    node *head = NULL;
    cout<<"Enter Values : ";
    for(int i=0;i<n;i++)
    {
        cin>>value;
        insert_end(head,value);
    }

    print(head);
    return 0;
}