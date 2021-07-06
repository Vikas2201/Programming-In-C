#include<bits/stdc++.h>
using namespace std;

int check_unique(int *a,int n)
{
    int xor_sum =0;
    for(int i=0;i<n;i++)
    {
        xor_sum = xor_sum ^ a[i];
    }

    return xor_sum;
}

int main()
{
    int n ;
    cout<<"Enter length of array : ";
    cin>>n;

    int arr[n];
    cout<<"Enter element in array : ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    cout<<"Unique Element in Array : "<<check_unique(arr,n);
    return 0;
}
