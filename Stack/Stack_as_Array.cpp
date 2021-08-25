#include<bits/stdc++.h>
using namespace std;

#define n 50

class Stack
{
    private:
        int* arr;
        int top;

    public:
        Stack()
        {
            arr = new int[n];
            top = -1;
        }

        void push(int value)
        {
            if(top == n-1)
            {
                cout<<"STACK OVERFLOW";
                return;
            }
            else
            {
                top++;
                arr[top] = value;
            }
        }

        void pop()
        {
            if(top == -1)
            {
                cout<<"STACK UNDERFLOW";
                return;
            }
            else
            {
                top--;
            }
        }

        int peek()
        {
            if(top == -1)
            {
                cout<<"STACK UNDERFLOW";
                return -1;
            }
            else
            {
                return arr[top];
            }
        }


        bool empty()
        {
            return top == -1;
        }

        void display()
        {
            int i = top;
            if(i == -1)
            {
                cout<<"STACK IS EMPTY";
                return;
            }
            else
            {
                for(;i>=0;i--)
                {
                    cout<<arr[i]<<" ";
                }
            }
        }
};

int main()
{
    Stack s;
    int value , choice;
    while(1)
    {
        cout<<"\nSELECT A CHOICE FROM THE FOLLOWING ";
        cout<<"\n1. PUSH A ELEMENT IN STACK ";
        cout<<"\n2. POP A ELEMENT FROM THE STACK ";
        cout<<"\n3. TOPMOST ELEMENT IN THE STACK ";
        cout<<"\n4. CHECK IF STACK IS EMPTY OR NOT ";
        cout<<"\n5. DISPLAY STACK ELEMENT ";
        cout<<"\n6. EXIT ";
        cout<<"\nENTER OUR CHOICE : ";
        cin>>choice;

        switch(choice)
        {
            case 1:
            {
                cout<<"\nENTER ELEMENT TO BE PUSHED INTO STACK ";
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
                cout<<s.peek();
                break;
            }
            case 4:
            {
                if(s.empty())
                {
                    cout<<"\nSTACK IS EMPTY";
                }
                else
                {
                    cout<<"\nSTACK IS NOT EMPTY";
                }
                break;
            }
            case 5:
            {
                s.display();
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
}
