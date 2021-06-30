#include<bits/stdc++.h>
using namespace std;

int kadane(int * a , int n)
{
    int max_sum = INT_MIN;
    int current_sum = 0;
    for(int i=0;i<n;i++)
    {
        current_sum = current_sum + a[i];
        if(current_sum < 0)
        {
            current_sum = 0;
        }
        max_sum = max(max_sum,current_sum);
    }
    return max_sum ;
}

int main()
{
    int n ;
    cout<<"Enter Lnegth of array : ";
    cin>>n;

    int a[n];
    cout<<"Enter  element in array : ";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    int rapsum = kadane(a,n);
    int total_sum = 0;

    for(int i=0;i<n;i++)
    {
        total_sum = total_sum + a[i];
        a[i] = -a[i];
    }

    int unrapsum = total_sum + kadane(a,n);

    cout<<"Maximum sum of circular subarray : "<<max(rapsum,unrapsum) ;
    return 0;
}