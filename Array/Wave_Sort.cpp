/* In Wave Sort sort we are sorted an array into a wave like array. An array ‘arr[0..n-1]’ is sorted in wave form 
if arr[0] >= arr[1] <= arr[2] >= arr[3] <= arr[4] >= ….. */

#include<bits/stdc++.h>
using namespace std;

void swap(int* arr , int i , int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

void wave_sort(int* arr , int n)
{
    for(int i=1;i<n;)
    {
        if(arr[i] > arr[i-1])
        {
            swap(arr,i,i-1);
        }
        if(arr[i] > arr[i+1] && i < n-1)
        {
            swap(arr,i,i+1);
        }
        i = i+2;
    }
}

int main()
{
    int n;
    cout<<"Enter Length Of Array : ";
    cin>>n;

    int arr[n];
    cout<<"Enter Element in Array : ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    wave_sort(arr,n);

    cout<<"Sorted Array : ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}