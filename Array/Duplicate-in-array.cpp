/* Given an array of integers of size n which contains numbers from 0 to n - 2. 
Each number is present at least once. That is, 
if n = 5, numbers from 0 to 3 is present in the given array at least once and one number is present twice. 
You need to find and return that duplicate number present in the array.

Assume, duplicate number is always present in the array.*/


#include<bits/stdc++.h>
using namespace std;

void sort(int * a , int n)
{
    int temp;
    for(int i=0;i<n;i++)
    {
        for(int j = 0 ; j<n-i ; j++)
        {
            if(a[j]>a[j+1])
            {
                temp = a[j+1];
                a[j+1] = a[j];
                a[j] = temp;
            }
        }
    }
}

int main()
{
    int n ;
    cout<<"Enter length of array : ";
    cin>>n;

    int a[n];
    cout<<"Enter element in array : ";
    for(int i =0;i<n;i++)
    {
        cin>>a[i];
    }

    sort(a,n);

    for(int i=0;i<n;i++)
    {
        if(a[i] == a[i+1])
        {
            cout<<"Duplicate element : "<<a[i];
            return 0;
        }
    }
}