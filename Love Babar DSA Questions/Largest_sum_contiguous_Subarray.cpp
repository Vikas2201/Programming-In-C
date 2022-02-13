#include<bits/stdc++.h>
using namespace std;

int Largest_sum(int* a, int n)
{
    int maxsum = a[0] , cursum = a[0];
    for(int i=1;i<n;i++)
    {
        if(cursum >=0)
        {
            cursum += a[i];
        }
        else
        {
            cursum = a[i];
        }
        if(maxsum <= cursum)
        {
            maxsum = cursum;
        }
    }
    return maxsum;
}

int main()
{
    int n;
    cout<<"Enter size of array : ";
    cin>>n;

    int a[n];
    cout<<"Enter element of array : ";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    int sum = Largest_sum(a,n);
    cout<<"Largest sum of contiguous subarray : "<<sum;
    return 0;
}