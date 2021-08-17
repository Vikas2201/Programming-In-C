#include<bits/stdc++.h>
using namespace std;

class node
{
    public:
        int data;
        node* next ;

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

node* reverse_recursion(node* head)
{
    if(head == NULL || head->next == NULL)
    {
        return head;
    }
    node* new_head = reverse_recursion(head->next);
    head->next->next = head;
    head->next = NULL;

    return new_head;
}

void print(node* head)
{
    if(head == NULL)
    {
        cout<<"Linked list does not exit";
        return;
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
    cout<<"Enter no. of node : ";
    cin>>n;

    int value;
    node* head = NULL;
    cout<<"Enter data : ";
    for(int i=0;i<n;i++)
    {
        cin>>value;
        insert_end(head,value);
    }

    cout<<"Our Linked list : ";
    print(head);

    cout<<"Linked list in reverse order : ";
    head = reverse_recursion(head);
    print(head);

    return 0;
}