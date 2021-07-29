#include<bits/stdc++.h>
using namespace std;

void Subsequence(int *a, int n)
{
    int Max = 0;
    int max_count = 0;
    int min_count = 0;
    for(int i=0;i<n;i++)
    {
        if(Max < a[i])
        {
            Max = a[i];
            max_count++;
            cout<<max_count<<" ";
        }
        else
        {
            min_count++;
            cout<<min_count<<" ";
        }
    }
}

int main()
{
    int n;
    cout<<"Enter Length Of Array : ";
    cin>>n;

    int a[n];
    cout<<"Enter Element In Array : ";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    Subsequence(a,n);
}