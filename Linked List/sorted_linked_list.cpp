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

void insert(node* &head,int value)
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
        node* pre_temp = NULL;
        if(temp->next == NULL)
        {
            if(temp->data > value)
            {
                n->next = temp;
                head = n;
                return;
            }
            else
            {
                temp->next = n;
                return;
            }
        }
        else
        {
            while(temp != NULL && temp->data < value)
            {
                pre_temp = temp;
                temp = temp->next;
            }
            if(temp == NULL)
            {
                pre_temp->next = n;
            }
            else
            {
                n->next = temp;
                pre_temp->next = n;
            }
        }
    }
}

void print(node* head)
{
    if(head == NULL)
    {
        cout<<"Linked list does not exit";
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
    int n;
    cout<<"Enter no. of node : ";
    cin>>n;

    int value;
    node* head = NULL;
    cout<<"Enter data : ";
    for(int i=0;i<n;i++)
    {
        cin>>value;
        insert(head,value);
    }

    cout<<"Linked list in sorted order : ";
    print(head);

    return 0;
}