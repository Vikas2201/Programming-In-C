/* Check whether a given String S is a palindrome using recursion. Return true or false. */

#include<iostream>
using namespace std;

char check(char * ch ,int start ,int end)
{
    if(ch[start] != ch[end])
    {
        return false;
    }  
    else if(start == end)
    {
        return true;
    }
    else
    {
        return true && check(ch , start + 1 , end - 1);
    }
}

int main()
{
    char ch[1000];
    int n = 0 ;
    cout<<"Enter a string : ";
    cin>>ch;
    
    for(int i = 0 ; ch[i] != '\0' ;i++)
    {
        n = n + 1;
    }
    if(check(ch , 0 , n-1))
    {
        cout<<"True";
    }
    else
    {
        cout<<"false" ;
    }
    return 0;
}