#include<bits/stdc++.h>
using namespace std;

void positive(int * a, int n , bool * check)
{
    int flag = 1;
    for(int i=0;i<n;i++)
    {
        if(a[i] >= 0)
        {
            check[a[i]] = true;
        }
    }
    for(int i=0;i<n;i++)
    {
        if(check[i] == false)
        {
            cout<<"First Positive Number that missing from array : "<<i;
            flag = 0;
            return ;
        }
    }
    if(flag == 1)
    {
        cout<<"Not missing";
        return ;
    }
}

int main()
{
    int n;
    cout<<"Enter length of array : ";
    cin>>n;

    int a[n];
    cout<<"Enter element in array : ";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    int N = 1000;
    bool check[N];
    for(int i=0;i<N;i++)
    {
        check[i] = false ;
    }

    positive(a,n,check);
    return 0;
}