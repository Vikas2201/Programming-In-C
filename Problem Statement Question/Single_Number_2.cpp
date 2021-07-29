/* Given an integer array nums where every element appears three times except for one, 
which appears exactly once. Find the single element and return it. */

#include<bits/stdc++.h>
using namespace std;

int singleNumber(vector<int>& nums) 
{
    int n = nums.size();
    if(n == 1)
        return nums[n-1];
    sort(nums.begin(),nums.end());
    for(int i=0;i<nums.size();i+=3)
    {
        if( i + 1 >= n)
        {
            return nums[i];
        }
        if(nums[i]!=nums[i+1])
        {
            return nums[i];
        }
    }
    return 0;
}

int main()
{
    int n;
    cout<<"Enter size of array : ";
    cin>>n;

    vector<int> nums(n);
    cout<<"Enter Element in array : ";
    for(int i =0;i<n;i++)
    {
        cin>>nums[i];
    }

    cout<<"Single One's Element In Array : "<<singleNumber(nums);
    return 0;
}