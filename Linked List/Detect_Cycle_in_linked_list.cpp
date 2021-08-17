/* Using Floyd's Algorthim / Hare & Tortoise Algorthim */
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

void make_cycle(node* head,int value)
{
    node* start_node;
    node* temp = head;
    bool flag = false;

    while(temp->next != NULL)
    {
        if(temp->data == value)
        {
            start_node = temp;
            flag = true;
        }
        temp = temp->next;
    }
    if(flag)
    {
        temp->next = start_node;
        return;
    }
    else
    {
        cout<<"Node Value Does Not Exit In Linked List";
        return;
    }
}

bool detectcycle(node* head)
{
    if(head == NULL)
    {
        return false;
    }
    else
    {
        node* fast_temp = head;
        node* slow_temp = head;
        while(fast_temp != NULL && fast_temp->next != NULL)
        {
            fast_temp = fast_temp->next->next;
            slow_temp = slow_temp->next;

            if(fast_temp == slow_temp)
            {
                return true;
            }
        }
        return false;
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

    make_cycle(head,4);

    if(detectcycle(head))
    {
        cout<<"CYCLE EXIT";
    }
    else
    {
        cout<<"CYCLE DOES NOT EXIT";
    }
    
    return 0;
}