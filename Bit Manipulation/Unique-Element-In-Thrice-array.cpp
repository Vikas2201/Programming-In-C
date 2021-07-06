/* Write a program to find Unique Element in an array where all elements present thrice times except one element */

#include<bits/stdc++.h>
using namespace std;

bool getbit(int n , int pos)
{
    return ((n & (1<<pos)) != 0);
}

int setbit(int n , int pos)
{
    return (n | (1<<pos));
}

void unique_value(int *a,int n)
{
    int result = 0;
    for(int i=0;i<64;i++)
    {
        int sum = 0;
        for(int j=0;j<n;j++)
        {
            if(getbit(a[j],i))
            {
                sum++;
            }
        } 
        if(sum%3 !=0)
        {
            result = setbit(result , i);
        }  
    }
    cout<<"Our Unique Element : "<<result;
}

int main()
{
    int n;
    cout<<"Enter Length of array : ";
    cin>>n;

    int arr[n];
    cout<<"Enter element in an array : ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    unique_value(arr,n);
    return 0;
}