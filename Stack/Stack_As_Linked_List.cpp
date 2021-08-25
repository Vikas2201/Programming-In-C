#include<bits/stdc++.h>
using namespace std;

class Stack
{
    public:
        int data;
        Stack* next;

        Stack(int value)
        {
            data = value;
            next = NULL;
        }
};

void push(Stack* &top , int value)
{
    Stack* n = new Stack(value);
    if(top == NULL)
    {
        top = n;
        return ;
    }           
    else
    {
        n->next = top;
        top = n;
    }
}

void pop(Stack* &top)
{
    if(top == NULL)
    {
        cout<<"STACK UNDERFLOW";
        return;
    }
    else
    {
        Stack* temp = top;
        top = temp->next;
        delete(temp);
    }
}

void seek(Stack* top)
{
    if(top == NULL)
    {
        cout<<"STACK IS EMPTY";
        return;
    }
    else
    {
        cout<<"TOPMOST ELEMENT IN STACK : "<<top->data;
    }
}

void display(Stack* top)
{
    if(top == NULL)
    {
        cout<<"STACK IS EMPTY";
        return;
    }
    else
    {
        Stack* temp = top;
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
    int choice;
    Stack* top = NULL;
    while(1)
    {
        cout<<"\nSELECT A CHOICE FROM THE FOLLOWING ";
        cout<<"\n1. PUSH A ELEMENT IN STACK ";
        cout<<"\n2. POP A ELEMENT FROM THE STACK ";
        cout<<"\n3. TOPMOST ELEMENT IN THE STACK ";
        cout<<"\n4. DISPLAY STACK ELEMENT ";
        cout<<"\n5. EXIT ";
        cout<<"\nENTER OUR CHOICE : ";
        cin>>choice;

        switch(choice)
        {
            case 1:
            {
                cout<<"\nENTER ELEMENT TO BE PUSHED INTO STACK ";
                cin>>value;

                push(top,value);
                break;
            }
            case 2:
            {
                pop(top);
                break;
            }
            case 3:
            {
                seek(top);
                break;
            }
            case 4:
            {
                display(top);
                break;
            }
            case 5:
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