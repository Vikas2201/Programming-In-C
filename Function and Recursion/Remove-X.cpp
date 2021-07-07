/* Given a string, compute recursively a new string where all 'x' chars have been removed. */


#include <bits/stdc++.h>
using namespace std;

string modify(string ch , int n , int start)
{
    if (ch[start] == 'x' || ch[start] == 'X')
    {
        return modify(ch,n,start+1);
    }
    else if(start == n)
    {
        return "";
    }
    else
    {
        return ch[start]+modify(ch,n,start+1);
    }
}

int main()
{
    string ch;
    int len ;
    cout<<"Enter a string : ";
    cin>>ch;

    
    len = ch.length();

    cout<<"Modified string : "<<modify(ch,len,0);
    return 0;

}