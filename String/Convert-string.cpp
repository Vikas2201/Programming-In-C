#include<bits/stdc++.h>
using namespace std;

void upper(string str)
{
    // lower to upper
    cout<<"\nString In Upper Alphabets : ";
    for(int i=0;i<str.length();i++)
    {
        if(str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] -= 32;
        }
    }

    // using in Bulit function 
    // transform(str[0],str[str.size()-1],str[0],::toupper)
    cout<<str;   
}

void lower(string str)
{
    // upper to lower
    cout<<"\nString In Lower Alphabets : ";
    for(int i=0;i<str.length();i++)
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] += 32;
        }
    }

    // using in Bulit function 
    // transform(str[0],str[str.size()-1],str[0],::tolower)
    cout<<str;
}

int main()
{
    string str;
    cout<<"Enter string : ";
    getline(cin,str);

    int option ;
    cout<<"\nIf U Want to chance string into upper alphabets Enter 1 else 0 : ";
    cin>>option;

    if(option)
    {
        upper(str);
    }
    else
    {
        lower(str);
    }
    return 0;
}