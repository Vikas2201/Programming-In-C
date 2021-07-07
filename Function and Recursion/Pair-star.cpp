/*  Given a string S, compute recursively a new string where identical chars 
that are adjacent in the original string are separated from each other by a "*". */

#include<bits/stdc++.h>
using namespace std;

void modify(string& str , string& out , int start = 0)
{
    out = out + str[start];
    if(start == str.length())
    {
        return ;
    }
    else if(str[start] == str[start+1])
    {
       out =  out + "*" ;
    }
    modify(str,out,start+1);
}

int main()
{
    string str , out = "";
    cout<<"Enter A String : ";
    cin>>str;

    modify(str,out);
    cout<<"Modified String : "<<out;
    return 0;
}