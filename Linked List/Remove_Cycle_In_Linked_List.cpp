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

void make_cycle(node* head , int pos)
{
    node* start_node ;
    node* temp = head;
    int count = 0;

    while(temp->next != NULL)
    {
        if(count == pos)
        {
            start_node = temp;
        }
        temp = temp->next;
        count++;
    }
    temp->next = start_node;
}

void detectcycle(node* head)
{
    if(head == NULL)
    {
        cout<<"CYCLE DOES NOT EXIST";
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
                cout<<"\nCYCLE EXIST";
                return;
            }
        }
        cout<<"\nCYCLE DOES NOT EXIST";
        return;
    }
}

void remove_cycle(node* head)
{
    node* fast_temp = head;
    node* slow_temp = head;
    do
    {
        fast_temp = fast_temp->next->next;
        slow_temp = slow_temp->next;

    } while (fast_temp != slow_temp);
    fast_temp = head;
    while(slow_temp->next != fast_temp->next)
    {
        slow_temp = slow_temp->next;
        fast_temp = fast_temp->next;
    }
    slow_temp->next = NULL;
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
        insert_end(head,value);
    }

    make_cycle(head,3);

    detectcycle(head);

    remove_cycle(head);
    detectcycle(head);
    cout<<"After Removing Cycle Linked List : ";
    print(head);
    
    return 0;
}