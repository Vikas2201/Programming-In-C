#include<bits/stdc++.h>
using namespace std;

void insert_at_bottom(stack<int> &st,int ele)
{
    if(st.empty())
    {
        st.push(ele);
        return;
    }
    else
    {
        int top_ele = st.top();
        st.pop();
        insert_at_bottom(st,ele);
        st.push(top_ele);
    }
}

void Reverse(stack<int> &st)
{
    if(st.empty())
    {
        return;
    }
    else
    {
        int ele = st.top();
        st.pop();
        Reverse(st);
        insert_at_bottom(st,ele);
    }
}

int main()
{
    stack<int> st;
    int n;
    cout<<"\nHOW MANY NUMBER U WANT TO ENTER IN STACK : ";
    cin>>n;

    int value;
    cout<<"\nENTER ELEMENT IN STACK : ";
    for(int i=0;i<n;i++)
    {
        cin>>value;
        st.push(value);
    }

    Reverse(st);
    cout<<"STACK IN REVERSE ORDER : ";
    while(!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }
    cout<<endl;

    return 0;
}