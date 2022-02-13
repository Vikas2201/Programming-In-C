#include<bits/stdc++.h>
using namespace std;

void Reverse(int *arr , int n)
{
    for(int i=0 , j = n-1;i<=j ; i++ , j--)
    {
        swap(arr[i],arr[j]);
    }
}

int main()
{
    int n;
    cout<<"Enter size of array : ";
    cin>>n;

    int arr[n];
    cout<<"Enter element in array : ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    Reverse(arr,n);
    cout<<"Reverse of given array : ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}