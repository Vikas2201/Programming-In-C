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
        return ;
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

void search(node* head,int value)
{
    if(head == NULL)
    {
        cout<<"Linked list does not exist ";
        return ;
    }
    else
    {
        node* temp = head;
        while(temp != NULL)
        {
            if(temp->data == value)
            {
                cout<<"Value Exist In Linked List";
                return;
            }
            temp = temp->next;
        }
        cout<<"Value does not exist";
        return;
    }
}

int main()
{
    int n;
    cout<<"Enter number of nodes : ";
    cin>>n;

    int value;
    node* head = NULL;

    cout<<"Enter data : ";
    for(int i=0;i<n;i++)
    {
        cin>>value;
        insert_end(head,value);
    }

    cout<<"Enter data which u want to search : ";
    cin>>value;

    search(head,value);
    return 0;
}