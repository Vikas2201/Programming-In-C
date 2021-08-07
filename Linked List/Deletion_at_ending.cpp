#include<bits/stdc++.h>
using namespace std;

class node
{
    public :
        int data;
        node* next;

        node (int value)
        {
            data = value;
            next = NULL;
        }
};

void insertion_end(node* &head , int value)
{
    node * n = new node(value);
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
        temp->next = n;
    }
}

void deletion_end(node* &head)
{
    if(head == NULL)
    {
        cout<<"DELETION NOT POSSIBLE";
        return;
    }
    else
    {
        node* temp = head;
        node* pre_temp = NULL;
        while(temp->next !=NULL)
        {
            pre_temp = temp;
            temp = temp->next;
        }
        pre_temp->next =  NULL;
        delete(temp);
    }
}

void print(node* &head)
{
    if(head == NULL)
    {
        cout<<"LINKED LIST DOES NOT EXIST";
    }
    else
    {
        node* temp = head;
        while(temp!= NULL)
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
    cout<<"Enter number of node : ";
    cin>>n;

    int value;
    node* head = NULL;

    cout<<"Enter data : ";
    for(int i=0;i<n;i++)
    {
        cin>>value;
        insertion_end(head,value);
    }

    cout<<"OUR LINKED LIST : ";
    print(head);

    cout<<"AFTER DELETION OUR LINKED LIST : ";
    deletion_end(head);
    print(head);

    return 0;
}