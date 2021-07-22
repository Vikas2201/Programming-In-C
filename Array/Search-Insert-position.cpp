/* Given a sorted array of distinct integers and a target value, return the index if the target is found. 
If not, return the index where it would be if it were inserted in order. */

#include<bits/stdc++.h>
using namespace std;

int searchInsert(int * nums, int target , int n) 
{
    if(n==0 || n==1 && nums[0] >= target)
        return 0;
    int beg=0 , end = n-1;
    int mid;
    while(beg <= end)
    {
        mid = (beg + end)/2;
        if(nums[mid] == target)
        {
            return mid;
        }
        if(nums[mid]<target)
        {
            if(mid == end)
               return mid+1;
            else
                beg = mid + 1;
        }
        else
       {
            if(beg == mid)
                return mid;
            else
                end = mid -1;
        }
    }
}

int main()
{
    int n;
    cout<<"Enter Length of array : ";
    cin>>n;
    int nums[n];
    cout<<"Enter Element of array : ";
    for(int i=0;i<n;i++)
    {
        cin>>nums[i];
    }    
    int target;
    cout<<"Enter Target Integer : ";
    cin>>target;

    cout<<"Index Of target value : "<<searchInsert(nums,target,n);
    return 0;
}