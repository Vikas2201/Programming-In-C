#include<bits/stdc++.h>
using namespace std;

class node
{
    public:
        int data;
        node* next =NULL;

        node(int value)
        {
            data = value;
            next = NULL;
        }
};

void insert_end(int value,node* &head)
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

void delete_after(int after_value , node* &head)
{
    if(head == NULL)
    {
        cout<<"Underflow Occurs";
        return;
    }
    else
    {
        node* temp = head;
        node* post_temp = NULL;
        if(temp->next == NULL)
        {
            if(temp->data == after_value)
            {
                cout<<"NO NODE PRSENT AFTER IT";
                return;
            }
            else
            {
                cout<<"NO NODE PRSENT FOR THIS VALUE";
                return;
            }
        }
        while(temp->next != NULL && temp->data != after_value)
        {
            temp = temp->next;
            post_temp = temp->next;
        }
        temp->next = post_temp->next;
        delete(post_temp);
    }
}

void print(node* head)
{
    if(head == NULL)
    {
        cout<<"LINKED LIST DOES NOT PRESENT";
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
    cout<<"Enter No. Of Nodes : ";
    cin>>n;

    int value;
    node* head = NULL;

    cout<<"Enter Data : ";
    for(int i=0;i<n;i++)
    {
        cin>>value;
        insert_end(value,head);
    }

    cout<<"Our Linked List : ";
    print(head);

    cout<<"Enter Node After Which U Want To Delete : ";
    cin>>value;

    delete_after(value,head);
    cout<<"Our Linked List After Deletion : ";
    print(head);

    return 0;
}