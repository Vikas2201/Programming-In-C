/* Given a string, compute recursively a new string where all appearances of "pi" have been replaced by "3.14". */

#include<bits/stdc++.h>
using namespace std;

void replace_pi(string str , int n , int i = 0)
{
    if(i == n)
    {
        return;
    }
    if(str[i] == 'p' && str[i+1] == 'i')
    {
        cout<<3.14;
        replace_pi(str,n,i+2);
    }
    else
    {
        cout<<str[i];
        replace_pi(str,n,i+1);
    }
}

int main()
{
    string str;
    cout<<"Enter String : ";
    getline(cin,str);

    replace_pi(str,str.length());
    return 0;
}