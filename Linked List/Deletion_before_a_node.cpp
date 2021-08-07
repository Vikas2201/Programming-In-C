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

void insert_beg(node* &head,int value)
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
        n->next = temp;
        head = n;
    }
}

void delete_before(node* &head,int value)
{
    if(head == NULL)
    {
        cout<<"Under Flow Exist";
        return;
    }
    else
    {
        node* ptr = NULL;
        node* pre_temp = head;
        node* temp = pre_temp->next;
        if(temp == NULL)
        {
            if(pre_temp->data == value)
            {
                cout<<"NO NODE PRESENT BEFORE THIS VALUE";
                return;
            }
            else
            {
                cout<<"NO NODE PRESENT FOR THIS VALUE";
                return;
            }
        } 
        while(temp->next != NULL && temp->data != value)
        {
            ptr = pre_temp;
            pre_temp = temp;
            temp = temp->next;
        }
        if(pre_temp == NULL)
        {
            cout<<"No Node With This Value Present In Linked List";
            return;
        }
        else
        {
            ptr->next = pre_temp->next;
            delete(pre_temp);
        }
    }
}

void print(node* head)
{
    if(head == NULL)
    {
        cout<<"LINKED LIST DOES NOT EXIST";
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
    cout<<"Enter No. Of Nodes : ";
    cin>>n;

    int value;
    node* head = NULL;

    cout<<"Enter Data : ";
    for(int i=0;i<n;i++)
    {
        cin>>value;
        insert_beg(head,value);
    }

    cout<<"Our Linked List : ";
    print(head);

    cout<<"Enter Node before Which U Want To Delete : ";
    cin>>value;

    delete_before(head,value);
    cout<<"Our Linked List before Deletion : ";
    print(head);

    return 0;
}