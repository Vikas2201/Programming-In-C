/* A peak element is an element that is strictly greater than its neighbors.

Given an integer array nums, find a peak element, and return its index. If the array contains multiple peaks, 
return the index to any of the peaks.

You may imagine that nums[-1] = nums[n] = -∞. */

#include<bits/stdc++.h>
using namespace std;

int findPeakElement(vector<int>& nums) 
{
    int n = nums.size();
    if( n == 1 || n == 0)
        return 0;
    if(nums[0] > nums[1])
        return 0;
    if(nums[n-1] > nums[n-2])
        return n-1;
    for(int i = 1 ; i<n-1 ; i++)
    {
        if(nums[i]> nums[i-1] && nums[i] > nums[i+1])
            return i;
    }
    return 0;
}

int main()
{
    int n;
    cout<<"Enter length of Array : ";
    cin>>n;
    
    vector<int> nums(n);
    cout<<"Enter Elements in Array : ";
    for(int i=0;i<n;i++)
    {
        cin>>nums[i];
    }

    cout<<"Peak Element Parsent in array at index : "<<findPeakElement(nums);
    return 0;
}