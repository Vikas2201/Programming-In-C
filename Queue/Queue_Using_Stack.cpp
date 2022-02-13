#include<bits/stdc++.h>
using namespace std;

class Queue
{
    stack<int> s1;
    stack<int> s2;

    public:
        void enqueue(int value)
        {
            s1.push(value);
        }

        void dequeue()
        {
            if(s1.empty() && s2.empty())
            {
                cout<<"\nUNDERFLOW OCCURS";
                return ;
            }
            if(s2.empty())
            {
                while(!s1.empty())
                {
                    s2.push(s1.top());
                    s1.pop();
                }
            }
            cout<<"\nDELETED ELEMENT : "<<s2.top();
            s2.pop();
            return;
        }

        void empty()
        {
            if(s1.empty() && s2.empty())
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
        cout<<"\n3. CHECK WHETHER A QUEUE IS EMPTY OR NOT ";
        cout<<"\n4. EXIT ";
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
                q.empty();
                break;
            }
            case 4:
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