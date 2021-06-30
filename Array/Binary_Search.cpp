#include<bits/stdc++.h>
using namespace std;

int binary_search(int *a,int end , int beg , int ele)
{
    int mid = (beg+end)/2 ;
    if(a[mid] == ele)
    {
        return mid + 1 ;
    }
    else if(a[mid] > ele)
    {
        binary_search(a,mid-1,beg,ele);
    }
    else
    {
        binary_search(a,end,mid+1,ele);
    }
}

int main()
{
    int n , arr[50] , ele ;
    cout<<"Enter length of array : ";
    cin>>n;

    cout<<"Enter elements in array : ";
    for(int i=0 ; i<n ;i++)
    {
        cin>>arr[i];
    }

    cout<<"Enter element for searching : ";
    cin>>ele;

    cout<<"Element "<<ele<<" Found at "<<binary_search(arr,n,0,ele)<<" position";
    return 0;
}