#include<bits/stdc++.h>
using namespace std;

void count(int n)
{
    int c=0;
    while(n)
    {
        n = (n & (n-1));
        c++;
    } 
    cout<<"Total '1' Present in given number : "<<c;
}

int main()
{
    int n ;
    cout<<"Enter Number : ";
    cin>>n;

    count(n);
    return 0;
}