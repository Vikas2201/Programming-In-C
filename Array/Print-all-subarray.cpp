#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n ;
    cout<<"Enter length of array : ";
    cin>>n;

    int a[n];
    cout<<"Enter element in array : ";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            cout<<"\nsubarray : ";
            for(int k=i;k<=j;k++)
            {
                cout<<a[k]<<" ";
            }
        }
    }    
    return 0;
}