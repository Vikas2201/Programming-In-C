#include<bits/stdc++.h>
using namespace std;

int count_parenthesis(string str)
{
    int n = str.size();
    stack<char> st;
    int count = 0;
    for(int i=0;i<n;i++)
    {
        if(str[i] == '(' || str[i] == '+' || str[i] == '-' || str[i] == '*' || str[i] == '/')
        {
            st.push(str[i]);
        }
        else if(str[i] == ')' && (st.top() == '+' || st.top() == '-' || st.top() == '*' || st.top() == '/'))
        {
            st.pop();
            st.pop();
        }
        else if(str[i] == ')' && st.top() == '(')
        {
            count++;
            st.pop();
        }
    }
    return count;
}

int main()
{
    string str;
    cout<<"\nENTER EXPERSSION : ";
    getline(cin,str);

    cout<<"\nTOTAL NUMBER OF REDUNDANT PARENTHESIS IN THE EXPERSSION : "<<count_parenthesis(str);
    return 0;
}