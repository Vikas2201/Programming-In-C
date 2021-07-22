// define a function for merge sort
#include<bits/stdc++.h>
using namespace std;

void merge(int* arr , int l , int mid , int r)
{
    int n1 = mid - l + 1;
    int n2 = r - mid;
    
    int a[n1] , b[n2]; // temp array
    for(int i=0;i<n1;i++)
    {
        a[i] = arr[l+i];
    }

    for(int i =0;i<n2;i++)
    {
        b[i] = arr[mid+1+i];
    }
    
    int i = 0 , j = 0 , k = l;
    while(i<n1 && j<n2)
    {
        if(a[i] < b[j])
        {
            arr[k] = a[i];
            k++;
            i++; 
        }
        else
        {
            arr[k] = b[j];
            k++;
            j++;
        }
    }
    while(i < n1)
    {
        arr[k] = a[i];
        k++;
        i++;
    }

    while(j<n2)
    {
        arr[k] = b[j];
        j++;
        k++;
    }
}

void MergeSort(int* arr , int l , int r)
{
    if(l<r)
    {
        int mid = (l+r)/2;
        MergeSort(arr,l,mid-1);
        MergeSort(arr,mid+1,r);
        merge(arr,l,mid,r);
    }
}

int main()
{
    int n;
    cout<<"Enter size of array : ";
    cin>>n;

    int arr[n];
    cout<<"Enter Element in array : ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    MergeSort(arr,0,n-1);
    cout<<"Array After Sorting : ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}