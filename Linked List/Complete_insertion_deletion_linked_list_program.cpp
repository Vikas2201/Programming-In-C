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

void insert_beg(node* &head,int value)
{
    node* n = new node(value);
    if(head == NULL)
    {
        head = n;
        return;
    }
    else
    {
        n->next = head;
        head = n;
    }
}

void insert_end(node* &head,int value)
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
        temp->next = n;
    }
}

void insert_after(node* &head,int value , int after_value)
{
    node* n = new node(value);
    if(head == NULL)
    {
        head = n;
        cout<<"\nInsertion after a certain value not possiable";
        return;
    }
    else
    {
        node* temp = head;
        while(temp != NULL && temp->data != after_value)
        {
            temp = temp->next;
        }
        if(temp == NULL)
        {
            cout<<"\nNODE VALUE DOES NOT EXIST";
            return ;
        }
        else
        {
            n->next = temp->next;
            temp->next = n;
        }
    }
}

void insert_before(node* &head,int value,int before_value)
{
    node* n = new node(value);
    if(head == NULL)
    {
        head = n;
        cout<<"\nINSERTION BEFORE A CERTAIN VALUE NOT POSIIABLE";
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
            cout<<"NO NODE EXIST WITH THIS VALUE";
            return ;
        }
        else if(pre_temp == NULL)
        {
            n->next = temp;
            head = n;
        }
        else
        {
            n->next = temp;
            pre_temp->next = n;   
        }
    }
}

void deletion_beg(node* &head)
{
    if(head == NULL)
    {
        cout<<"UNDERFLOW OUCCRS ";
        return ;
    }
    else
    {
        node* temp = head;
        head = temp->next;
        delete(temp);
    }
}

void deletion_end(node* &head)
{
    if(head == NULL)
    {
        cout<<"UNDERFLOW EXIST";
        return ;
    }
    else
    {
        node* temp = head;
        node* pre_temp = NULL;
        while(temp->next != NULL)
        {
            pre_temp = temp;
            temp = temp->next;
        }
        if(pre_temp == NULL)
        {
            delete(temp);
            head = NULL;
            return;
        }
        else
        {
            pre_temp->next = NULL;
            delete(temp);
        }
    }
}

void after_deletion(node* &head,int after_value)
{
    if(head == NULL)
    {
        cout<<"UNDERFLOW EXIST";
        return ;
    }
    else
    {
        node* temp = head;
        node* post_temp = NULL;
        if(temp->next == NULL)
        {
            if(temp->data == after_value)
            {
                cout<<"NO NODE AFTER THIS VALUE EXIT";
                return;
            }
            else
            {
                cout<<"NO NODE EXIST WITH THIS VALUE";
                return;
            }
        }
        while(temp->next != NULL && temp->data != after_value)
        {
            temp = temp->next;
            post_temp = temp->next;
        }
        temp->next = post_temp->next;
        delete(post_temp);
    }
}

void before_deletion(node* &head , int before_value)
{
    if(head == NULL)
    {
        cout<<"UNDERFLOW EXIST";
        return;
    }
    else
    {
        node* pre_temp = NULL;
        node* temp = head;
        node* post_temp = temp->next;
        if(post_temp == NULL)
        {
            if(temp->data == before_value)
            {
                cout<<"NO NODE PRESENT BEFORE THIS VALUE";
                return;
            }
            else
            {
                cout<<"NO NODE EXIST WITH THIS VALUE";
                return ;
            }
        }
        else
        {
            while(post_temp->next != NULL && post_temp->data != before_value)
            {
                pre_temp = temp;
                temp = post_temp;
                post_temp = post_temp->next;
            }
            pre_temp->next = temp->next;
            delete(temp);
        }
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
    int value;
    node *head = NULL;
    int choice;

    while(1)
    {
        cout<<"\nOUR CHOICES : ";
        cout<<"\n1. INSERTION IN THE BEGINING ";
        cout<<"\n2. INSERTION IN ENDING ";
        cout<<"\n3. INSERTION AFTER A GIVEN NODE ";
        cout<<"\n4. INSERTION BEFORE A GIVEN NODE ";
        cout<<"\n5. DELETION AT BEGINING ";
        cout<<"\n6. DELETION AT ENDING ";
        cout<<"\n7. DELETION AFTER A GIVEN NODE ";
        cout<<"\n8. DELETION BEFORE A GIVEN NODE ";
        cout<<"\n9. PRINT A LINKED LIST ";
        cout<<"\n10. EXIST ";
        cout<<"\nENTER YOUR CHOICE : ";
        cin>>choice;

        switch(choice)
        {
            case 1:
			{
				cout<<"\nEnter a value for inserting at the beginning : ";
				cin>>value;
				insert_beg(head,value);
				break;
			}	
            case 2:
			{
				cout<<"\nEnter a value for inserting at the end : ";
				cin>>value;
                insert_end(head,value);
				break;
			}
            case 3:
            {
                cout<<"\nEnter a value for insertion after a certain node : ";
                cin>>value;

                int after_value;
                cout<<"Enter after node value : ";
                cin>>after_value;

                insert_after(head,value,after_value);
                break;
            }
            case 4:
            {
                cout<<"\nEnter a value for insertion before a certain node : ";
                cin>>value;

                int before_value;
                cout<<"Enter after node value : ";
                cin>>before_value;

                insert_before(head,value,before_value);
                break;
            }
            case 5:
            {
                deletion_beg(head);
                break;
            }
            case 6:
            {
                deletion_end(head);
                break;
            }
            case 7:
            {
                int after_value;
                cout<<"\nEnter which after node value u want to delete : ";
                cin>>after_value;

                after_deletion(head,after_value);
                break;
            }
            case 8:
            {
                int before_value;
                cout<<"\nEnter which before node u want to delete : ";
                cin>>before_value;

                before_deletion(head,before_value);
                break;
            }
            case 9:
            {
                print(head);
                break;
            }
            case 10:
            {
                exit(1);
                break;
            }
            default:
			{
				cout<<"\nEnter correct choice :";
				break;
			}
        }
    }
}