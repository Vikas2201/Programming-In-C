/* Given a queue of integers, reverse it without help of any explicit stack or queue. 
You need to change in the given queue itself. */

#include<bits/stdc++.h>
using namespace std;

#define n 100

class Queue
{
    int* arr;
    int rear;
    int front;
    public:
        Queue()
        {
            arr = new int[n];
            rear = -1;
            front = -1;
        }

        void enqueue(int value)
        {
            if(rear == -1 && front == -1)
            {
                rear++;
                front++;
                arr[rear] = value;
                return ;
            }
            if(rear == n-1)
            {
                cout<<"\nOVERFLOW";
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

        void reverse()
        {
            if(front == -1)
            {
                cout<<"\nQUEUE IS EMPTY";
                return;
            }
            else
            {
                int temp1 = front;
                int temp2 = rear;
                while(temp1 <= temp2)
                {
                    int temp = arr[temp1];
                    arr[temp1] = arr[temp2];
                    arr[temp2] = temp;
                    temp1++;
                    temp2--;
                }
            }
        }
};

int main()
{
    Queue q;
    int m;
    cout<<"\nSIZE OF QUEUE : ";
    cin>>m;
    int value;
    cout<<"\nENTER VALUES IN QUEUE : ";
    for(int i=0;i<m;i++)
    {
        cin>>value;
        q.enqueue(value);
    }

    cout<<"\nFRONT ELEMENT IN QUEUE : ";
    q.peek();

    q.reverse();
    cout<<"\nFRONT ELEMENT AFTER REVERSING A QUEUE : ";
    q.peek();

    return 0;
}