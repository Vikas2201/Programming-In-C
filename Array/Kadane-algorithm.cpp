/* Kadane's algorithm is used for finding maximum  subarray sum in O(n) time complexity. */

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n ;
    cout<<"Enter length of array : ";
    cin>>n;

    int a[n];
    cout<<"Enter elements in array : ";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    int current_sum = 0;
    int max_sum = INT_MIN;
    
    for(int i=0;i<n;i++)
    {
        current_sum = current_sum + a[i];
        if(current_sum <0)
        {
            current_sum = 0;
        }
        max_sum = max(max_sum,current_sum);
    }
    cout<<"Maximum subarray sum : "<<max_sum;
    return 0;
}