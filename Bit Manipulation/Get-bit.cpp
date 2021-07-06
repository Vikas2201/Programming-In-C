#include<bits/stdc++.h>
using namespace std;

int get_bit(int n, int pos)
{
    return ((n & (1<<pos)) != 0);
}

int main()
{
    int n , pos;
    cout<<"Enter Number in binary form : ";
    cin>>n;

    cout<<"Enter Position : ";
    cin>>pos;

    cout<<"Bit Found At "<<pos<<" : "<<get_bit(n,pos);
    return 0;
}