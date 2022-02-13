#include<bits/stdc++.h>
using namespace std;

void cyclically_rotate(int* arr , int n)
{
    int temp = arr[n-1];
    for(int i=n-1;i>0;i--)
    {
        arr[i] = arr[i-1];
    }
    arr[0] = temp;
}

int main()
{
    int n;
    cout<<"Enter size of array : ";
    cin>>n;

    int arr[n];
    cout<<"Enter elemenet in an array : ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    cyclically_rotate(arr,n);
    cout<<"Array after rotation : ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}