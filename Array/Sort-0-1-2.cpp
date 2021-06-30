/* You are given an integer array/list(ARR) of size N. It contains only 0s, 1s and 2s. 
Write a solution to sort this array/list in a 'single scan'.

'Single Scan' refers to iterating over the array/list just once or to put it in other words, 
you will be visiting each element in the array/list just once. */

#include<bits/stdc++.h>
using namespace std;

void sort_array(int *a , int n)
{
    int c0 = 0 , c1 = 0 , c2 = 0;
    for(int i=0;i<n;i++)
    {
        switch (a[i])
        {
            case 0:
            {
                c0++;
                break; 
            }
            case 1:
            {
                c1++ ;
                break;
            }
            case 2:
            {
                c2++;
                break;
            }
        }
    }   
    int i=0 ;
    while(c0 > 0)
    {
        a[i++] = 0;
        c0--;
    }
    while(c1 > 0)
    {
        a[i++] = 1;
        c1--;
    }
    while(c2 > 0)
    {
        a[i++] = 2;
        c2--;
    }

    cout<<"Our Array after sorting : ";
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return ;
}

int main()
 {
    int test ;
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

        sort_array(a,n);
    }
    return 0;
 }