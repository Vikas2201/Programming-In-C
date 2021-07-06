#include<bits/stdc++.h>
using namespace std;

int check(int n)
{
    return (n & (n-1));
}

int main()
{
    int n;
    cout<<"Enter A Number : ";
    cin>>n;

    if(check(n) == 0)
    {
        cout<<"Number in power of 2";
    }
    else
    {
        cout<<"Number not in power of 2";
    }
}