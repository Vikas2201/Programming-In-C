#include<bits/stdc++.h>
using namespace std;

bool valid(string str)
{
    int n = str.size();
    stack<char> st;

    if(n == 0)
    {
        return false;
    }
    else
    {
        for(int i=0;i<n;i++)
        {
            if(str[i] == '(' || str[i] == '{' || str[i] == '[')
            {
                st.push(str[i]);
            }
            else if(str[i] == ')' && st.top() == '(')
            {
                st.pop();
            }
            else if(str[i] == '}' && st.top() == '{')
            {
                st.pop();
            }
            else if(str[i] == ']' && st.top() == '[')
            {
                st.pop();
            }
            else
            {
                return false;
            }
        }
        return st.empty();
    }
}

int main()
{
    string str;
    cout<<"ENTER PARENTHESES : ";
    getline(cin,str);

    cout<<valid(str);
    return 0;
}
