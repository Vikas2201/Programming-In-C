#include<bits/stdc++.h>
using namespace std;

#define n 100

class Queue
{
    int* arr;
    int front;
    int rear;

    public:
        Queue()
        {
            arr = new int[n];
            front = -1;
            rear = -1;
        }
        
        void enqueue(int value)
        {
            if(rear == n-1)
            {
                cout<<"\nQUEUE OVERFLOW";
                return;
            }
            else if(front == -1)
            {
                front++;
                rear++;
                arr[rear] = value;
                return ;
            }
            else
            {
                rear++;
                arr[rear] = value;
            }
        }

        void dequeue()
        {
            if(front == -1 || front > rear)
            {
                cout<<"\nQUEUE UNDERFLOW";
                return ;
            }
            else
            {
                front++;
            }
        }

        void peek()
        {
            if(front == -1 || front > rear)
            {
                cout<<"\nQUEUE IS EMPTY";
                return ;
            }
            else
            {
                cout<<"\nVALUE AT FRONT : "<<arr[front];
            }
        }

        void empty()
        {
            if(front == -1 || front > rear)
            {
                cout<<"\nQUEUE IS EMPTY";
                return;
            }
            else
            {
                cout<<"\nQUEUE IS NOT EMPTY";
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
        cout<<"\n5. EXIT ";
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