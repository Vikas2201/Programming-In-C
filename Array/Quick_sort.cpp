#include<bits/stdc++.h>
using namespace std;

void swap(int* arr , int i , int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

int partition(int* arr , int start , int end)
{
    int pivot = arr[end];
    int i = start-1;
    for(int j=start;j<end;j++)
    {
        if(arr[j]<pivot)
        {
            i++;
            swap(arr,i,j);
        }
    }
    swap(arr,i+1,end);
    return i+1;
}

void quick_sort(int* arr,int start ,int end)
{
    if(start<end)
    {
        int pt = partition(arr,start,end);
        quick_sort(arr,start,pt-1);
        quick_sort(arr,pt+1,end);
    }
}

int main()
{
    int n;
    cout<<"Enter Length of array : ";
    cin>>n;

    int arr[n];
    cout<<"Enter Element in array : ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    quick_sort(arr,0,n-1);
    cout<<"Array After sorting : ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}