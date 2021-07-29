#include<bits/stdc++.h>
using namespace std;

void Max_subarray_sum(int *a, int n)
{
    int sq[n] = {0};
    for(int i=0;i<n;i++)
    {
        sq[i] = a[i]*a[i];
    }
    int Max = INT_MIN;
    for(int i=0;i<n;i++)
    {
        int temp = a[i];
        a[i] = sq[i];
        int sum = 0;
        for(int j=0;j<n;j++)
        {
            sum = sum + a[j];
            Max = max(Max,sum);
        }
        a[i] = temp;
    }
    cout<<"Maximum Sum Is : "<<Max;
}

int main()
{
    int n ;
    cout<<"Enter Length of array : ";
    cin>>n;

    
    int a[n];
    cout<<"Enter Element in Array : ";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    Max_subarray_sum(a,n);
    return 0;
}