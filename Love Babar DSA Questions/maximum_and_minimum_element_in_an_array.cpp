#include<bits/stdc++.h>
using namespace std;

void max_min(int* arr,int n)
{
    int mx = INT_MIN;
    int mn = INT_MAX;
    for(int i=0;i<n;i++)
    {
        if(mx < arr[i])
        {
            mx = arr[i];
        }
        if(mn > arr[i])
        {
            mn = arr[i];
        }
    }
    cout<<"Maximum element in an array : "<<mx<<" and Minimum element in an array : "<<mn;
    return ;
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

    max_min(arr,n);
    return 0;
}