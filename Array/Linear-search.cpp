#include<bits/stdc++.h>
using namespace std;

int linear_search(int *a, int n , int ele , int start)
{
    if(a[start] == ele)
    {
        return start+1 ;
    }
    else if(start == n)
    {
        return -1;
    }
    linear_search(a,n,ele,start+1);
}

int main()
{
    int n , arr[50] , ele;
    cout<<"Enter length of array : ";
    cin>>n;

    cout<<"enter elements in array : ";
    for(int i=0 ; i<n ;i++)
    {
        cin>>arr[i];
    }

    cout<<"Enter element for searching : ";
    cin>>ele;

    cout<<"Element "<<ele<<" Found at "<<linear_search(arr,n,ele,0)<<" Position"; // -1 for element not present in array
    return 0;
}