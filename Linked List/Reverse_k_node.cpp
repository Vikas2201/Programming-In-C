#include<bits/stdc++.h>
using namespace std;

class node
{
    public:
        int data;
        node* next = NULL;

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

node* reverse_knode(node* head, int k)
{
    if(head == NULL || k == 0)
    {
        return head;
    }
    else
    {
        int count = 0;
        node* pre_temp = NULL;
        node* temp = head;
        node* post_temp;
        while(temp != NULL && count < k)
        {
            post_temp = temp->next;
            temp->next = pre_temp;

            pre_temp = temp;
            temp = post_temp;
            count++;
        }

        if(post_temp != NULL)
        {
            head->next = reverse_knode(post_temp,k);
        }
        return pre_temp;
    }
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

    cout<<"Our Linked list : ";
    print(head);

    int k;
    cout<<"Enter value k : ";
    cin>>k;

    cout<<"Linked list in reverse order : ";
    node* new_head = reverse_knode(head,k);
    print(new_head);

    return 0;
}