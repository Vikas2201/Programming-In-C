#include<bits/stdc++.h>
using namespace std;

void matching(string s, string t)
{
    int n = s.size();
    int m = t.size();

    for(int i=0;i<=n-m;i++)
    {
        if(t.substr(0,m) == s.substr(i,m))
        {
            cout<<"\nSTRING MATCHES : "<<i;
        }
    }
}
int main()
{
    string t = "for";
    string s = "geeksforgeeks";
    matching(s,t);
    return 0;
}