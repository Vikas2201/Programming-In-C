/* Given a string s consisting of some words separated by some number of spaces, 
return the length of the last word in the string.

A word is a maximal substring consisting of non-space characters only. */

#include<bits/stdc++.h>
using namespace std;

int lengthOfLastWord(string s) 
{    
    int c = 0;
    for(int i=s.length()-1;i>=0;i--)
    {
        if(c == 0 && s[i] == ' ')
            continue;
        if(c != 0 && s[i] == ' ')
            break;
        c++;
    }
    return c;
}

int main()
{
    string str;
    cout<<"ENTER STRING : ";
    getline(cin,str);

    cout<<"\nLENGTH OF LAST WORD IN THE STRING : "<<lengthOfLastWord(str);
    return 0;
}