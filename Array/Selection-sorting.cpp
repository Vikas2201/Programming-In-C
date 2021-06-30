#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[50], n , temp ;
    cout<<"Enter length of array : ";
    cin>>n;

    cout<<"Enter elements in array : ";
    for(int i=0 ; i<n ;i++)
    {
        cin>>arr[i];
    }

    for(int i=0 ; i<n-1 ; i++)
    {
        for(int j =i+1 ; j<n ; j++)
        {
            if(arr[j]<arr[i])
            {
                temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp ;
            }
        }
    }

    cout<<"Sorting Array : ";
    for(int i=0 ; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}