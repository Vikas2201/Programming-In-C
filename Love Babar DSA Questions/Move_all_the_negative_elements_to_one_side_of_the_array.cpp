#include<bits/stdc++.h>
using namespace std;

void negative_move(int* arr,int n)
{
    int j = 0;
    for(int i=0;i<n;i++)
    {
        if(arr[i] < 0)
        {
            if(i != j)
            {
                swap(arr[i],arr[j]);
            }
            j++;
        }
    }
}

int main()
{
    int n;
    cout<<"Enter size of array : ";
    cin>>n;

    int arr[n];
    cout<<"Enter element in an array : ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    negative_move(arr,n);

    cout<<"New array : ";
    for(int i =0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}