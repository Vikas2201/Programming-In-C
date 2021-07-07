/* Find First And Last Occurence Element In An Array Using Recursion */

#include<bits/stdc++.h>
using namespace std;

int Find_first(int *a,int n,int key , int i=0)
{
    if(i == n)
    {
        return -1;
    }
    if(a[i] == key)
    {
        return i+1 ;
    }
    else
    {
        return Find_first(a,n,key,i+1);   
    }
}

int Find_last(int * a , int n , int key , int i=0)
{
    if(i == n)
    {
        return -1;
    }
    
    int pos = Find_last(a,n,key,i+1);

    if(pos != -1)
    {
        return pos;
    }

    if(a[i] == key)
    {
        return i+1 ;
    } 
    return -1;   
}

int main()
{
    int n;
    cout<<"Enter size of array : ";
    cin>>n;

    int a[n];
    cout<<"Enter Element in array : ";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    int key;
    cout<<"Enter Element that u want to Search : ";
    cin>>key;

    cout<<"First Place Of Occurence : "<<Find_first(a,n,key);
    cout<<"\nLast Place Of Occurence : "<<Find_last(a,n,key);
    return 0;
}