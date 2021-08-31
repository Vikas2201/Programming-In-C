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

class Queue
{
    node* front;
    node* rear;
    public:
        Queue()
        {
            front = NULL;
            rear = NULL;
        }

        void enqueue(int value)
        {
            node* n = new node(value);
            if(front == NULL)
            {
                front = n;
                rear = n;
                return ;
            }
            else
            {
                rear->next = n;
                rear = n;
            }
        }

        void dequeue()
        {
            if(front == NULL && rear == NULL)
            {
                cout<<"\nQUEUE UNDERFLOW";
                return ;
            }
            else
            {
                if(front == rear)
                {
                    delete(front);
                    front = NULL;
                    rear = NULL;
                    return;
                }
                node* temp = front;
                front = front->next;

                delete(temp);
            }
        }

        void peek()
        {
            if(front == NULL && rear == NULL)
            {
                cout<<"\nQUEUE IS EMPTY";
                return ;
            }
            else
            {
                cout<<"\nVALUE PRESENT AT FRONT OF QUEUE : "<<front->data;
            }
        }

        void empty()
        {
            if(front == NULL && rear == NULL)
            {
                cout<<"\nQUEUE IS EMPTY";
                return ;
            }
            else
            {
                cout<<"\nQUEUE IS NOT EMPTY";
            }
        }

        void print()
        {
            if(front == NULL && rear == NULL)
            {
                cout<<"\nQUEUE DOES NOT CONTAIN ANY ELEMENT";
                return ;
            }
            else
            {
                node* temp = front;
                while(temp != rear)
                {
                    cout<<temp->data<<"->";
                    temp = temp->next;
                }
                cout<<temp->data<<"-> NULL";
            }
        }
};


int main()
{
    Queue q;
    int value , choice;
    while(1)
    {
        cout<<"\nYOUR CHOICE : ";
        cout<<"\n1. INSERTION IN QUEUE ";
        cout<<"\n2. DELETION IN QUEUE ";
        cout<<"\n3. FRONT ELEMENT IN QUEUE ";
        cout<<"\n4. CHECK WHETHER A QUEUE IS EMPTY OR NOT ";
        cout<<"\n5. PRINT QUEUE ELEMENT ";
        cout<<"\n6. EXIT ";
        cout<<"\nSELECT YOUR OPTION : ";
        cin>>choice;

        switch(choice)
        {
            case 1:
            {
                cout<<"\nENTER VALUE FOR INSERTION IN QUEUE : ";
                cin>>value;

                q.enqueue(value);
                break;
            }
            case 2:
            {
                q.dequeue();
                break;
            }
            case 3:
            {
                q.peek();
                break;
            }
            case 4:
            {
                q.empty();
                break;
            }
            case 5:
            {
                q.print();
                break;
            }
            case 6:
            {
                exit(1);
                break;
            }
            default :
            {
                cout<<"\nENTER CORRECT CHOICE ";
                break;
            }
        }
    }
    return 0;
}