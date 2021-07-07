#include<bits/stdc++.h>
using namespace std;

int fib(int n)
{
    if(n==0 || n ==1)
    {
        return n;
    }
    else
    {
        return fib(n-1) + fib(n-2);
    }
}

int main()
{
    int n;
    cout<<"Enter Position : ";
    cin>>n;

    cout<<n<<"th position element in Fibenacci Series : "<<fib(n);
    return 0;
}