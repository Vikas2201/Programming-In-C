/* Given an integer array nums, return the maximum difference between two successive elements in its sorted form. 
If the array contains less than two elements, return 0. */

#include<bits/stdc++.h>
using namespace std;

int maximumGap(vector<int>& nums) 
{
    int n = nums.size();
    if( n <2)
        return 0;
    sort(nums.begin(),nums.end());
    int i=0 , j=1;
    int Max = INT_MIN;
    while(i<n&&j<n)
    {
        Max = max(Max,nums[j]-nums[i]);
        i++,j++;
    }
    return Max;
}

int main()
{
    int n;
    cout<<"Enter Length of array : ";
    cin>>n;

    vector<int> nums(n);
    cout<<"Enter element in array : ";
    for(int i=0;i<n;i++)
    {
        cin>>nums[i];
    }

    cout<<"Maximum difference between two successive elements in it sorted Array : "<<maximumGap(nums);
    return 0;
}