#include<bits/stdc++.h>
using namespace std;

void inseration_sort(int *a , int n)
{
    int i , min_no, pos;
    for(i=1;i<n;i++)
    {
        min_no = a[i];
        pos = i-1 ;
        while(a[pos] > min_no && pos >=0)
        {
            a[pos+1] = a[pos];
            pos--;
        }
        a[pos+1] = min_no;
    }
}

int main()
{
    int n , arr[50];
    cout<<"Enter length of array : ";
    cin>>n;

    cout<<"Enter elements in array : ";
    for(int i=0 ;i <n ;i++)
    {
        cin>>arr[i];
    }
    inseration_sort(arr,n);
    cout<<"Sorted array : ";
    for(int i=0 ;i <n ;i++)
    {
        cout<<arr[i]<<" ";
    }
}