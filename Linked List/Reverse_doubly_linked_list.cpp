#include<bits/stdc++.h>
using namespace std;

class node
{
    public:
        int data;
        node* next;
        node* prev;

        node(int value)
        {
            data = value;
            next = NULL;
            prev = NULL;
        }
};

void Insert_end(node* &head,int value)
{
    node* n = new node(value);

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
        n->prev = temp;
    }
}

void reverse(node* &head)
{
    if(head == NULL)
    {
        cout<<"LINKED LIST DOES NOT EXIST";
        return;
    }
    else
    {
        node* pre_temp = NULL;
        node* temp = head;
        while(temp != NULL)
        {
            temp->prev = temp->next;
            temp->next = pre_temp;
            pre_temp = temp;
            temp = temp->next;
        }
        head = pre_temp;
        return;
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
    node* head = NULL;
    Insert_end(head,2);
    Insert_end(head,3);
    Insert_end(head,1);
    Insert_end(head,5);
    Insert_end(head,4);
    Insert_end(head,9);
    Insert_end(head,6);

    cout<<"OUR LINKED LIST : ";
    print(head);

    cout<<"LINKED LIST IN REVERSE ORDER : ";
    reverse(head);
    print(head);

    return 0;
}