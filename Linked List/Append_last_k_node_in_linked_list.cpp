#include<bits/stdc++.h>
using namespace std;

class node
{
    public :
        int data;
        node* next ;

        node(int value)
        {
            data = value;
            next = NULL;
        }
};

void insertion(node* &head,int value)
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

int length_linked(node* &head)
{
    if(head == NULL)
    {
        return 0;
    }
    else
    {
        node* temp = head;
        int count = 0;
        while(temp!= NULL)
        {
            temp = temp->next;
            count++;
        }
        return count;
    }
}

void append_k_node(node* &head,int k)
{
    if(head == NULL)
    {
        cout<<"LINKED LIST DOES NOT EXIST";
        return ;
    }
    else
    {
        node* tail = head;
        node* new_head = NULL;
        node* new_tail = NULL; 
        int n = length_linked(head);
        int count = 1;
        k = k%n;
        while(tail->next != NULL)
        {
            if(count == n-k)
            {
                new_tail = tail;
            }
            if(count == n-k+1)
            {
                new_head = tail;
            }
            count++;
            tail = tail->next;
        }
        tail->next = head;
        new_tail->next = NULL;
        head = new_head;
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
    cout<<"How Many Node Do U Want To Enter : ";
    cin>>n;

    int value;
    node* head = NULL;
    cout<<"Enter Data : ";
    for(int i=0;i<n;i++)
    {
        cin>>value;
        insertion(head,value);
    }

    cout<<"Our Linked List : ";
    print(head);

    int k;
    cout<<"Enter Value Of K : ";
    cin>>k;
    append_k_node(head,k);

    cout<<"After Appending K Node from last To Start Linked List : ";
    print(head);

    return 0;
}