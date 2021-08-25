#include<bits/stdc++.h>
using namespace std;

void Reverse(string str)
{
    stack<string> s;
    int n = str.size();
    for(int i=0;i<n;i++)
    {
        string word = "";
        while(str[i] != ' ' && i < n)
        {
            word += str[i];
            i++;
        }
        s.push(word);
    }
    while(!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;
}

int main()
{
    string str;
    cout<<"ENTER STRING : ";
    getline(cin,str);

    Reverse(str);
    return 0;
}