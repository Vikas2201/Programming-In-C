#include<bits/stdc++.h>
using namespace std;

int pred(char ch)
{
    if(ch == '^')
        return 3;
    else if(ch == '*' || ch =='/')
        return 2;
    else if(ch == '+' || ch == '-')
        return 1;
    else
        return -1;
}

string Infix_To_Postfix(string str)
{
    stack<char> st;
    string res;

    for(int i=0;i<str.size();i++)
    {
        if(str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z')
        {
            res += str[i];
        }
        else if(str[i] == '(')
        {
            st.push(str[i]);
        }
        else if(str[i] == ')')
        {
            while(st.top() != '(' && !st.empty())
            {
                res += st.top();
                st.pop();
            }
            if(!st.empty())
            {
                st.pop();
            }
        }
        else
        {
            while(!st.empty() && pred(st.top()) > pred(str[i]))
            {
                res += st.top();
                st.pop();
            }
            st.push(str[i]);
        }
    }

    while(!st.empty())
    {
        res += st.top();
        st.pop();
    }
    return res;
}

int main()
{
    string str;
    cout<<"ENTER INFIX EXPERSSION : ";
    getline(cin,str);

    string ans ;
    ans = Infix_To_Postfix(str);

    cout<<"POSTFIX EXPERSSION : "<<ans;
    return 0;
}