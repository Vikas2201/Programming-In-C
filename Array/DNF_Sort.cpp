/* DNF Sort is also Called 0,1,2 Sort */
#include<bits/stdc++.h>
using namespace std;

void swap(int* arr , int i , int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

void dnf_sort(int* arr , int n)
{
    int beg = 0 , mid =0 , end = n-1;
    while(mid <= end)
    {
        if(arr[mid] == 0)
        {
            swap(arr,beg,mid);
            beg++;
            mid++;
        }
        else if(arr[mid] == 1)
        {
            mid++;
        }
        else if(arr[mid] == 2)
        {
            swap(arr,mid,end);
            end--;
        }
    }
}

int main()
{
    int n;
    cout<<"Enter Length Of Array : ";
    cin>>n;

    int arr[n];
    cout<<"Enter Element in array : ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    dnf_sort(arr,n);

    cout<<"Sorted Array : ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}