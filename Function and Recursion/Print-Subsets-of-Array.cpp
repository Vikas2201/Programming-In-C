/* Given an integer array (of length n), find and print all the subsets of input array.
Subsets are of length varying from 0 to n, that contain elements of the array. 
But the order of elements should remain same as in the input array. */

#include<bits/stdc++.h>
using namespace std;

void subset(int *a,int *out,int n,int pos,int size)
{
    if(pos == n)
    {
        for(int i=0 ;i<size;i++)
        {
            cout<<out[i]<<" ";
        }
        cout<<endl;
        return ;
    }
    subset(a,out,n,pos+1,size);
    out[size] = a[pos];
    subset(a,out,n,pos+1,size+1);
}

int main()
{
    int n , a[50],out[100];
    cout<<"Enter length of array : ";
    cin>>n;

    cout<<"Enter elements in array : ";
    for(int i=0; i<n ;i++)
    {
        cin>>a[i];
    }
    cout<<"Subset Of Input Array : ";
    subset(a,out,n,0,0);
    return 0;
}