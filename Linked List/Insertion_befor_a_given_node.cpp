#include<bits/stdc++.h>
using namespace std;

class node
{
    public :
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

void insert_befor(int value, node* &head,int befor_value)
{
    node* n = new node(value);
    if(head == NULL)
    {
        head = n;
        cout<<"Operation not possiable";
        return ;
    }

    else
    {
        node* temp = head;
        node* pre_temp = NULL;
        while(temp!=NULL  && temp->data != befor_value)
        {
            pre_temp = temp;
            temp = temp->next;
        }

        if(temp == NULL)
        {
            cout<<"NO Node present with this value : ";
            return ;
        }
        else if(pre_temp == NULL)
        {
            n->next = head;
            head = n;
        }
        else
        {
            n->next = temp;
            pre_temp->next = n;
        }
    }
}

void print(node *head)
{
    if(head == NULL)
    {
        cout<<"Linked list does not exit";
        return;
    }
    else
    {
        node *temp = head;
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
    cout<<"Enter Number of node : ";
    cin>>n;

    int value;
    node * head = NULL;
    for(int i=0;i<n;i++)
    {
        cin>>value;
        insert_end(head,value);
    }

    cout<<"Our Linked list : ";
    print(head);

    cout<<"Enter Value which u want to insert befor a certain value : ";
    cin>>value;

    int befor_value;
    cout<<"Enter befor node value : ";
    cin>>befor_value;

    insert_befor(value,head,befor_value);

    cout<<"After Insertion : ";
    print(head);

    return 0;
}