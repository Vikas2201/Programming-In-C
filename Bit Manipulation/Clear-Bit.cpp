#include<bits/stdc++.h>
using namespace std;

int clear_bit(int n , int pos)
{
    return ( n & (~(1<<pos)));
}

int main()
{
    int n , pos;

    cout<<"Enter number : ";
    cin>>n;

    cout<<"Enter position : ";
    cin>>pos;

    cout<<"After Sit Bit Number is : "<<clear_bit(n,pos);
    return 0;
}