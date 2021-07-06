#include<bits/stdc++.h>
using namespace std;

int update_bit(int n , int pos , int value)
{
    int clear = ( n & (~(1<<pos)));

    return (clear | (value<<pos));
}

int main()
{
    int n , pos , value;

    cout<<"Enter number : ";
    cin>>n;

    cout<<"Enter position : ";
    cin>>pos;

    cout<<"Enter value of bit : ";
    cin>>value;

    cout<<"After Sit Bit Number is : "<<update_bit(n,pos,value);
    return 0;
}