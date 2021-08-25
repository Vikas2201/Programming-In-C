/* Given a string containing just the characters '(' and ')',
 find the length of the longest valid (well-formed) parentheses substring. */

#include<bits/stdc++.h>
using namespace std;

int longestValidParentheses(string st) 
{
    stack<int>s;
    int i=0;
    int ans=0;
    while(i<st.size())
    {
        if(!s.empty()&&st[i]==')'&&st[s.top()]=='(')
        {
            s.pop();
        }
        else
            s.push(i);
        int init=s.empty()?-1:s.top();
        ans=max(ans,i-init);
        i++;
    }
    return ans; 
}

int main()
{
    string str;
    cout<<"ENTER STRING : ";
    getline(cin,str);

    cout<<"\nlength of the longest valid (well-formed) parentheses substring : "<<longestValidParentheses(str);
    return 0;
}