#include<bits/stdc++.h>
using namespace std;

bool setbit(int n , int pos)
{
    return ((n&(1<<pos)) != 0);
}

void Unique_ele(int *a , int n)
{
    int xor_sum = 0;
    for(int i=0;i<n;i++)
    {
        xor_sum = (xor_sum ^ a[i]);
    }
    int temp_xor = xorsum;
    int pos =0 , bit = 0;
    while(bit != 1)
    {
        bit = (xor_sum & 1);
        pos++;
        xor_sum = (xor_sum >> 1);
    }
    int new_sum = 0;
    for(int i=0;i<n;i++)
    {
        if(setbit(a[i],pos-1))
        {
            new_sum = (new_sum ^ a[i]);
        }
    }
    cout<<"First Unique Number : "<<new_sum<<endl;
    cout<<"Second Unique Number : "<<(new_sum^temp_xor)<<endl;
}

int main()
{
    int n;
    cout<<"Enter length of array : ";
    cin>>n;

    int arr[n];
    cout<<"Enter Element In Array : ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[n];
    }

    Unique_ele(arr,n);
    return 0;
}