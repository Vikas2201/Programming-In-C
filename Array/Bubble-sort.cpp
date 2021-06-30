#include<bits/stdc++.h>
using namespace std;

void bubble_sort(int* arr , int n)
{
    int temp , i ,j ;
    for(i=0;i<n;i++)
    {
        for(j=0 ; j<n-i;j++)
        {
            if(arr[j] > arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main()
{
    int n , arr[50] , i  ;
    cout<<"Enter length of array : ";
    cin>>n;

    cout<<"Enter elements in array : ";
    for(i=0 ;i<n ;i++)
    {
        cin>>arr[i];
    }

    bubble_sort(arr,n);
    cout<<"Sorted array : ";
    for(i=0 ;i<n ;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}