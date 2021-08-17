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

void insert_end(node* &head,int value)
{
    node* n = new node(value);
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

void print_reverse(node* head)
{
    if(head != NULL)
    {
        print_reverse(head->next);
        cout<<head->data<<"->";
    }
}

void print(node* head)
{
    if(head == NULL)
    {
        cout<<"Linked List does not exist";
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
    int n;
    cout<<"Enter No. Of Node : ";
    cin>>n;

    int value;
    node* head = NULL;

    cout<<"Enter data : ";
    for(int i=0;i<n;i++)
    {
        cin>>value;
        insert_end(head,value);
    }

    cout<<"Our linked list : ";
    print(head);

    cout<<"Our linked list in Reverse order : ";
    print_reverse(head);

    return 0;
}