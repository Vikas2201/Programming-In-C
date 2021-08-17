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

void intersection(node* head1,node* head2)
{
    if(head1 == NULL || head2 == NULL)
    {
        cout<<"INTERSECTION POINT DOES NOT EXIST";
        return;
    }
    else
    {
        int n1 = length_linked(head1);
        int n2 = length_linked(head2);

        node* temp1;
        node* temp2;

        int d;
        if(n1 > n2)
        {
            temp1 = head1;
            temp2 = head2;
            d = n1 - n2;
        }
        else
        {
            temp1 = head2;
            temp2 = head1;
            d = n2 - n1;
        }

        while(d)
        {
            temp1 = temp1->next;
            if(temp1 == NULL)
            {
                cout<<"INTERSECTION POINT DOES NOT EXIST";
                return;
            }
            d--;
        }

        while(temp1 != NULL && temp2 != NULL)
        {
            if(temp1 == temp2)
            {
                cout<<"INTERSECTION POINT FOUNT AT "<<temp1->data;
                return;
            }
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
    }
    cout<<"INTERSECTION POINT DOES NOT EXIST";
    return;
}

void intersect(node* head1,node* head2,int pos)
{
    if(head1 == NULL || head2 == NULL)
    {
        cout<<"INTERSECT TWO LINKED LIST DOES NOT POSSIABLE";
        return;
    }
    else
    {
        node* temp1 = head1;
        node* temp2 = head2;

        pos--;
        while(pos--)
        {
            temp1 = temp1->next;
        }
        while(temp2->next != NULL)
        {
            temp2 = temp2->next;
        }
        temp2->next = temp1;
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
    node* head1 = NULL;
    node* head2 = NULL;

    insertion(head1,1);
    insertion(head1,2);
    insertion(head1,3);
    insertion(head1,4);
    insertion(head1,5);
    insertion(head1,6);
    insertion(head1,7);
    insertion(head2,8);
    insertion(head2,9);
    intersect(head1,head2,5);

    cout<<"Our Ist Linked List : ";
    print(head1);

    cout<<"Our 2nd Linked List : ";
    print(head2);

    intersection(head1,head2);
    return 0;
}