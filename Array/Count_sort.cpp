#include<bits/stdc++.h>
using namespace std;

void count_sort(int* arr,int n)
{
    int Max = arr[0];
    for(int i=1;i<n;i++)
    {
        Max = max(Max,arr[i]);
    }

    int count[Max+1];
    for(int i=0;i<=Max;i++)
    {
        count[i] = 0;
    }

    for(int i=0;i<n;i++)
    {
        count[arr[i]]++;
    }

    for(int i=1;i<=Max;i++)
    {
        count[i] = count[i] + count[i-1];
    }

    int output[n];
    for(int i = n-1;i>=0;i--)
    {
        output[--count[arr[i]]] = arr[i];
    }

    cout<<"Sorted Array : ";
    for(int i =0;i<n;i++)
    {
        cout<<output[i]<<" ";
    }



}

int main()
{
    int n;
    cout<<"Enter Length of Array : ";
    cin>>n;

    int arr[n];
    cout<<"Enter Element In Array : ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    count_sort(arr,n);
    return 0;
}