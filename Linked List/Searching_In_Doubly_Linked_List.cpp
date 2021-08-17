#include<bits/stdc++.h>
using namespace std;

class node
{
    public:
        int data;
        node* prev;
        node* next;

        node(int value)
        {
            data = value;
            prev = NULL;
            next = NULL;
        }
};

void Insertion_end(node* &head,int value)
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
        n->prev = temp;
        temp->next = n;
    }
}

void search(node* head,int value)
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
            if(temp->data == value)
            {
                cout<<"VALUE EXIST IN LINKED LIST";
                return;
            }
            temp = temp->next;
        }
    }
    cout<<"VALUE DOES NOT EXIST IN LINKED LIST";
    return ;
}

int main()
{
    int choice;
    int value;
    node* head = NULL;

    int n;
    cout<<"ENTER NUMBER OF NODES : ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>value;
        Insertion_end(head,value);
    }

    cout<<"ENTER VALUE FOR SEARCHING : ";
    cin>>value;

    search(head,value);

    return 0;

}