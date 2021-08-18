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

void Insertion(node* &head , int value)
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
        return ;
    }
}

node* Change_position(node* head)
{
    if(head == NULL)
    {
        cout<<"LINKED LIST DOES NOT EXIST";
        return head;
    }
    else
    {
        node* odd = head;
        node* start = odd;
        node* even = head->next;
        node* even_start = even;
        while(odd->next != NULL && even->next != NULL)
        {
            odd->next = even->next;
            odd = odd->next;
            even->next = odd->next;
            even = even->next;
        }
        odd->next = even_start;
        if(odd->next != NULL)
        {
            even->next = NULL;
        }
        return start;
    }
}

void print(node* head)
{
    if(head == NULL)
    {
        cout<<"LINKED LIST DOES NOT EXIST";
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
    cout<<"HOW MANY NODE U WANT TO ENTER : ";
    cin>>n;

    int value;
    node* head = NULL;
    cout<<"ENTER VALUE : ";
    for(int i=0;i<n;i++)
    {
        cin>>value;
        Insertion(head,value);
    }

    cout<<"OUR LINKED LIST : ";
    print(head);

    node* new_head = Change_position(head);
    cout<<"AFTER CHANGING POSITION OUR LINKED LIST : ";

    print(new_head);
    return 0;
}