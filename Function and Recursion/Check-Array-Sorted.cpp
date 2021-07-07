/* Chcek A Array Is Sorted Or Not Using Recursion and Return 1 if it is Sorted else 0 .*/

#include<bits/stdc++.h>
using namespace std;

bool check_sort(int *a,int n)
{
    if(n==1)
    {
        return true;
    }
    else
    {
        return ((a[0] < a[1]) && (check_sort(a+1,n-1)));
    }
}

int main()
{
    int n ;
    cout<<"Enter Length of array : ";
    cin>>n;

    int a[n];
    cout<<"Enter Element In An Array : ";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    cout<<check_sort(a,n);
    return 0;
}
