#include<bits/stdc++.h>
using namespace std;

class Stack
{
    int n;
    queue<int> q1;
    queue<int> q2;

    public:

        Stack()
        {
            n = 0;
        }

        void push(int value)
        {
            q1.push(value);
            n++;
        }

        void pop()
        {
            if(q1.empty())
            {
                cout<<"\nUNDERFLOW OCCUR";
                return;
            }
            while(q1.size() != 1)
            {
                q2.push(q1.front());
                q1.pop();
            }
            q1.pop();
            n--;
            queue<int> temp = q1;
            q1 = q2;
            q2 = temp;
        }

        void top()
        {
            if(q1.empty())
            {
                cout<<"\nSTACK IS EMPTY";
                return;
            }
            while(q1.size() != 1)
            {
                q2.push(q1.front());
                q1.pop();
            }
            cout<<"TOP MOST ELEMENT IN STACK : "<<q1.front();
            q2.push(q1.front());
            queue<int> temp = q1;
            q1 = q2;
            q2 = temp;
        }

        void size()
        {
            cout<<"SIZE OF STACK : "<<n;
        }
};

int main()
{
    Stack s;
    int value , choice;
    while(1)
    {
        cout<<"\nYOUR CHOICE : ";
        cout<<"\n1. INSERTION IN STACK ";
        cout<<"\n2. DELETION IN STACK ";
        cout<<"\n3. TOP ELEMENT IN STACK ";
        cout<<"\n4. SIZE OF STACK ";
        cout<<"\n5. EXIT ";
        cout<<"\nSELECT YOUR OPTION : ";
        cin>>choice;

        switch(choice)
        {
            case 1:
            {
                cout<<"\nENTER VALUE FOR INSERTION IN QUEUE : ";
                cin>>value;

                s.push(value);
                break;
            }
            case 2:
            {
                s.pop();
                break;
            }
            case 3:
            {
                s.top();
                break;
            }
            case 4:
            {
                s.size();
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