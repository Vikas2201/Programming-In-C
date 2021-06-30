/* You have been given a random integer array/list(ARR) of size N. 
Write a function that rotates the given array/list by D elements(towards the left). */

#include<bits/stdc++.h>
using namespace std;

void rotate_array(int *a , int n , int d)
{
    int temp;
    for(int i=0;i<n-d;i++)
    {
        temp = a[i];
        a[i] = a[i+d];
        a[i+d] = temp;
    }

    temp = a[n-d+1];
    a[n-d+1] = a[n-d];
    a[n-d] = temp;

    cout<<"After rotation array : ";
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}

int main()
{
    int test;
    cout<<"how many test case u enter : ";
    cin>>test;

    for(int i=0;i<test;i++)
    {
        cout<<"\nfor "<<i+1<<" test case";
        int n ;
        cout<<"\nEnter length of array : ";
        cin>>n;

        int a[n];
        cout<<"Enter elements in array : ";
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }

        int d;
        cout<<"Enter value of D : ";
        cin>>d;

        rotate_array(a,n,d);
    }
    return 0;
}
