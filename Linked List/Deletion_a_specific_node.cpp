#include<bits/stdc++.h>
using namespace std;

class node
{
    public:
        int data;
        node * next;

        node(int value)
        {
            data = value;
            next = NULL;
        }
};

void insertion_end(node* &head,int value)
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

void deletion_element(node* &head, int value)
{
    if(head == NULL)
    {
        cout<<"DELETION NOT POSSIABLE";
        return ;
    }
    else
    {
        node* temp = head;
        node* pre_temp =  NULL;

        while(temp != NULL && temp->data != value)
        {
            pre_temp = temp;
            temp = temp->next;
        }

        if(temp == NULL)
        {
            cout<<"NODE DOES NOT PRESENT";
            return ;
        }
        else if(pre_temp == NULL)
        {
            head = temp->next;
            delete(temp);
            return ;
        }
        else
        {
            pre_temp->next = temp->next;
            delete(temp);
        }
    }
}

void print(node* head)
{
    if(head == NULL)
    {
        cout<<"LINKED LIST DOES NOT PRESENT";
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

    cout<<"ENTER DATA : ";
    for(int i=0;i<n;i++)
    {
        cin>>value;
        insertion_end(head,value);
    }

    cout<<"OUR LINKED LIST : ";
    print(head);

    cout<<"ENTER VALUE OF NODE WHICH U WANT TO DELETE : ";
    cin>>value;

    cout<<"LINKED LIST AFTER DELETION : ";
    deletion_element(head,value);
    print(head);

    return 0;
}