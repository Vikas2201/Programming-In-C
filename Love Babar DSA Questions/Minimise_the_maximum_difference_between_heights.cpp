/* Given an array arr[] denoting heights of N towers and a positive integer K, you have to modify the height of each tower 
either by increasing or decreasing them by K only once. After modifying, height should be a non-negative integer. 

Find out the minimum possible difference of the height of shortest and longest towers after you have modified each tower. */

#include<bits/stdc++.h>
using namespace std;

int min_diff(int* a , int n , int k)
{
    sort(a,a+n);
    int ans = a[n-1] - a[0];
    int small = a[0] + k;
    int largest = a[n-1] - k;
    for(int i = 0;i<n-1;i++)
    {
        int mini = min(a[i+1]+k,small);
        int maxi = max(a[i] -k , largest);
        int temp = maxi - mini;
        if(mini < 0)
        {
            continue;
        }
        if(temp < ans)
        {
            ans = temp;
        }
    }
    return ans;
}

int main()
{
    int n;
    cout<<"Enter size of array : ";
    cin>>n;

    int a[n];
    cout<<"Enter element of an array : ";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    int k;
    cout<<"Enter a positive modifier : ";
    cin>>k;

    int Minimum = min_diff(a,n,k);
    cout<<"Minimum possible differnece of the array : "<<Minimum;
    return 0;
}