#include<bits/stdc++.h>
using namespace std;

int Prefix_Evalution(string str)
{
    stack<int> st;
    int n = str.size();
    for (int i=n-1;i>=0;i--)
    {
        if(str[i] >= '0' && str[i] <= '9')
        {
            st.push(str[i] - '0');
        }
        else
        {
            int op1 = st.top();
            st.pop();
            int op2 = st.top();
            st.pop();
            switch(str[i])
            {
                case '+':
                {
                    st.push(op1 + op2);
                    break;
                }
                case '-':
                {
                    st.push(op1 - op2);
                    break;
                }
                case '*':
                {
                    st.push(op1 * op2);
                    break;
                }
                case '/':
                {
                    st.push(op1 / op2);
                    break;
                }
                case '^':
                {
                    st.push(pow(op1,op2));
                }
            } 
        }
    }
    return st.top();
}

int main()
{
    string str;
    cout<<"ENTER PREFIX EXPERSSION : ";
    getline(cin,str);

    cout<<"\nRESULT : "<<Prefix_Evalution(str);
    return 0;   
}