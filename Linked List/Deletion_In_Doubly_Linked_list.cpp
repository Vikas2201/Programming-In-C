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

void deletion_beg(node* &head)
{
    if(head == NULL)
    {
        cout<<"UNDERFLOW OUCCRS";
        return;
    }
    else
    {
        node* temp = head;
        temp->next->prev = NULL;
        head = temp->next;
        delete(temp);
    }
}

void deletion_end(node* &head)
{
    if(head == NULL)
    {
        cout<<"UNDERFLOW OUCCRS";
        return;
    }
    else
    {
        node* temp = head;
        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->prev->next = NULL;
        delete(temp);
    }
}

void deletion_after(node* &head , int after_value)
{
    if(head == NULL)
    {
        cout<<"UNDERFLOW OUCCRS";
        return;
    }
    else
    {
        node* temp = head;
        node* post_temp = temp->next;
        while(temp != NULL && temp->data != after_value)
        {
            temp = temp->next;
            post_temp = temp->next;
        }
        if(temp == NULL)
        {
            cout<<"AFTER NODE VALUE DOES NOT EXIST IN LINKED LIST";
            return;
        }
        else if(post_temp->next == NULL)
        {
            temp->next = NULL;
            delete(post_temp);
        }
        else
        {
            temp->next = post_temp->next;
            post_temp->next->prev = temp;
            delete(post_temp);
        }
    }
}

void deletion_before(node* &head,int before_value)
{
    if(head == NULL)
    {
        cout<<"UNDERFLOW OUCCRS";
        return;
    }
    else
    {
        node* temp = head;
        node* pre_temp = NULL;
        while(temp != NULL && temp->data != before_value)
        {
            pre_temp = temp;
            temp = temp->next;
        }
        if(temp == NULL)
        {
            cout<<"BEFORE NODE VALUE DOES NOT EXIST IN LINKED LIST";
            return;
        }
        else if(pre_temp == NULL)
        {
            cout<<"NO NODE PRESENT BEFORE THAT VALUE";
            return;
        }
        else
        {
            if(pre_temp->prev == NULL)
            {
                temp->prev = NULL;
                head = temp;
                delete(pre_temp);
                return ;
            }
            else
            {
                temp->prev = pre_temp->prev;
                pre_temp->prev->next = temp;
                delete(pre_temp);
                return;
            }
        }
    }
}

void print(node* head)
{
    if(head == NULL)
    {
        cout<<"\nLINKED LIST DOES NOT EXIST";
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

    while(1)
    {
        cout<<"\nOUR CHOICE : ";
        cout<<"\n1. DELETION AT THE BEGINING ";
        cout<<"\n2. DELETION AT THE END ";
        cout<<"\n3. DELETION AFTER A CERTAIN NODE ";
        cout<<"\n4. DELETION BEFORE A CERTAIN NODE ";
        cout<<"\n5. PRINT LINKED LIST ";
        cout<<"\n6. EXIT ";
        cout<<"\nENTER YOUR CHOICE : ";
        cin>>choice;

        switch(choice)
        {
            case 1:
            {
                deletion_beg(head);
                break;
            }
            case 2:
            {
                deletion_end(head);
                break;
            }
            case 3:
            {
                int after_value;
                cout<<"\nENTER VALUE AFTER WHICH NODE U WANT TO INSERT A VALUE : ";
                cin>>after_value;

                deletion_after(head,after_value);
                break;
            }
            case 4:
            {
                int before_value;
                cout<<"\nENTER VALUE BEFORE WHICH NODE U WANT TO INSERT A VALUE : ";
                cin>>before_value;

                deletion_before(head,before_value);
                break;
            }
            case 5:
            {
                cout<<"\nOUR LINKED LIST : ";
                print(head);
                break;
            }
            case 6:
            {
                exit(1);
                break;
            }
            default:
            {
                cout<<"\nENTER CORRECT CHOICE";
                break;
            }
        }
    }
    return 0;
}