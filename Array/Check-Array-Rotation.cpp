/* You have been given an integer array/list(ARR) of size N. 
It has been sorted(in increasing order) and then rotated by some number 'K' in the clockwise direction.

Your task is to write a function that returns the value of 'K', that means, 
the index from which the array/list has been rotated. */

#include<bits/stdc++.h>
using namespace std;

void check_rotate(int *a , int n)
{
    int min = a[0];
    int min_index = 0;
    for(int i=1;i<n;i++)
    {
        if(min > a[i])
        {
            min = a[i];
            min_index = i;
        }
    }
    cout<<"Rotation value of array : "<<min_index;
    return;
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

        check_rotate(a,n);
    }
    return 0;
}