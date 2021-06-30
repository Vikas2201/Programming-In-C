#include<bits/stdc++.h>
using namespace std;

void repeat(int * a , int n , int * index)
{
    int min_index = INT_MAX;
    for(int i=0;i<n;i++)
    {
        if(index[a[i]] != -1)
        {
            min_index = min(min_index,index[a[i]]);
        }
        else
        {
            index[a[i]] = i ;
        }
    }
    if(min_index == INT_MAX)
    {
        cout<<"Repeating element not found";
        return ;
    }
    else
    {
        cout<<"Repeating element found at "<<min_index +1 <<" Position";
        return ;
    }
}

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
    
    int N = 1000 ;
    int index[N] ;
    for(int i=0;i<N ;i++)
    {
        index[i] = -1;
    }

    repeat(a,n,index);
    return 0;
}