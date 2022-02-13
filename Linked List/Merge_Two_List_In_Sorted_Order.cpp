/* Merge two sorted linked lists and return it as a sorted list. 
The list should be made by splicing together the nodes of the first two lists. */

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


node* mergeTwoLists(node* l1, node* l2) 
{
    if(!l1) 
        return l2;
    if(!l2) 
        return l1;
    if(l1->data < l2->data) 
    {
        l1->next = mergeTwoLists(l1->next,l2);
        return l1;
    }
    else
    {
        l2->next =mergeTwoLists(l1,l2->next);
        return l2;
    }
}

void insertion(node* &head,int value)
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
    }
}

void display(node* head)
{
    if(head == NULL)
    {
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
    insertion(head1,4);
    insertion(head2,1);
    insertion(head2,3);
    insertion(head2,4);
    insertion(head2,5);

    cout<<"\nOUR FIRST LIST : ";
    display(head1);
    cout<<"\nOUR SECOND LIST : ";
    display(head2);

    cout<<"\nLINKED LIST AFTER MERGING : ";
    node* head = mergeTwoLists(head1,head2);
    display(head);

    return 0;
}