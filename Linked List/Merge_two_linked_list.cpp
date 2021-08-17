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

void Insertion(node* &head,int value)
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

void Merge(node* head1,node* head2,node* &head3)
{
    if(head1 == NULL && head2 == NULL)
    {
        head3 = NULL;
        return;
    }
    else
    {
        node* temp1 = head1;
        node* temp2 = head2;
        node* dump_node = new node(-1);
        node* temp3 = dump_node;
        while(temp1 != NULL && temp2 != NULL)
        {
            if(temp1->data < temp2->data)
            {
                temp3->next = temp1;
                temp1 = temp1->next;
            }
            else
            {
                temp3->next = temp2;
                temp2 = temp2->next;
            }
            temp3 = temp3->next;
        }
        while(temp1 != NULL)
        {
            temp3->next = temp1;
            temp1 = temp1->next;
            temp3 = temp3->next;
        }
        while(temp2 != NULL)
        {
            temp3->next = temp2;
            temp2 = temp2->next;
            temp3 = temp3->next;
        }
        head3 = dump_node->next;
        return ;
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
    cout<<"\nENTER NUMBER OF NODES FOR FIRST LIST : ";
    cin>>n;

    int value;
    node* head1 = NULL;
    cout<<"\nENTER DATA FOR FIRST LINKED LIST : ";
    for(int i=0;i<n;i++)
    {
        cin>>value;
        Insertion(head1,value);
    }

    cout<<"\nENTER NUMBER OF NODES FOR SECOND LIST : ";
    cin>>n;
    node* head2 = NULL;
    cout<<"\nENTER DATA FOR SECOND LINKED LIST : ";
    for(int i=0;i<n;i++)
    {
        cin>>value;
        Insertion(head2,value);
    }

    cout<<"\nOUR FIRST LINKED LIST : ";
    print(head1);

    cout<<"\nOUR SECOND LINKED LIST : ";
    print(head2);

    cout<<"\nLINKED LIST AFTER MERGING : ";
    node* head3 = NULL;
    Merge(head1,head2,head3);
    print(head3);

    return 0;
}