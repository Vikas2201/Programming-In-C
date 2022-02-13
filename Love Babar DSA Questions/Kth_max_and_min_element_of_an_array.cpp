#include<bits/stdc++.h>
using namespace std;

void kth_max_min(int *arr , int n , int k)
{
    sort(arr,arr+n);
    cout<<"Minimum element in an array : "<<arr[k-1]<<" and Maximum element in an array : "<<arr[n-k];
    return ;
}

int main()
{
    int n;
    cout<<"Enter size of array : ";
    cin>>n;

    int arr[n];
    cout<<"Enter elements in array : ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int k;
    cout<<"Enter value of k : ";
    cin>>k;

    kth_max_min(arr,n,k);
    return 0;
}