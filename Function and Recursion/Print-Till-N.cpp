/* Print Number Till Nth Position In Increasing Or Decreasing Order Using Recursion */

#include<bits/stdc++.h>
using namespace std;

void inc(int n)
{
    if(n == 0)
    {
        return ;
    }
    else
    {
        inc(n-1);
        cout<<n<<" ";
    }
}

void dec(int n)
{
    if(n == 0)
    {
        return ;
    }
    else
    {
        cout<<n<<' ';
        dec(n-1);
    }
}

int main()
{
    int n;
    cout<<"Enter Nth Term : ";
    cin>>n;

    cout<<"Number In Increasing Order : ";
    inc(n);

    cout<<"\nNumber In Decreasing Order : ";
    dec(n);

    return 0;   
}