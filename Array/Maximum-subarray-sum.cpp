#include<bits/stdc++.h>
using namespace std;

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

    int max_sum = INT_MIN ;

    for(int i=0;i<n;i++)
    {
        int sum = 0;
        for(int j=i;j<n;j++)
        {
            sum = sum + a[j];
            max_sum = max(max_sum,sum);
        }
    }
    cout<<"Maximum sum of subarray : "<<max_sum;
    return 0;
}