/* You are a professional robber planning to rob houses along a street. Each house has a certain amount of money stashed, 
the only constraint stopping you from robbing each of them is that adjacent houses have security systems connected and 
it will automatically contact the police if two adjacent houses were broken into on the same night.

Given an integer array nums representing the amount of money of each house, return the maximum amount of money 
you can rob tonight without alerting the police. */

#include<bits/stdc++.h>
using namespace std;

int rob(vector<int>& nums) 
{
    int n = nums.size();
    if(n==0)
    {
        return 0;
    }
    if(n==1)
    {
        return nums[0]; 
    }
        
    int v1 = nums[0];
    int sum = max(nums[0],nums[1]);
    
    for(int i=2;i<n;i++)
    {
        int temp = sum;
        sum = max(sum, v1 + nums[i]);
        v1 = temp;
    }
    return sum;
}

int main()
{
    int n;
    cout<<"Enter No. Of House : ";
    cin>>n;

    vector<int> nums(n);
    cout<<"Enter Money Of House : ";
    for(int i=0;i<n;i++)
    {
        cin>>nums[i];
    }   

    cout<<"Total Amount Of Money Robber Can Collect : "<<rob(nums);
    return 0;
}