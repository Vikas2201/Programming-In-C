#include<bits/stdc++.h>
using namespace std;

class node
{
    public:
        int data;
        node * next;

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

void reverse_list(node* &head)
{
    if(head == NULL)
    {
        cout<<"Linked list does not exist";
        return;
    }
    else
    {
        node* pre_temp = NULL;
        node* temp = head;
        node* post_temp ;
        while(temp != NULL)
        {
            post_temp = temp->next;
            temp->next = pre_temp;
            
            pre_temp = temp;
            temp = post_temp;
            
        }
        head = pre_temp;
    }
}

void print(node* &head)
{
    if(head == NULL)
    {
        cout<<"Linked list does not exist";
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
    reverse_list(head);
    print(head);

    return 0;
}