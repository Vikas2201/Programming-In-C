/* Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n] inclusive.

There is only one repeated number in nums, return this repeated number.

You must solve the problem without modifying the array nums and uses only constant extra space. */

#include<bits/stdc++.h>
using namespace std;

int findDuplicate(vector<int>& nums) 
{
    int n = nums.size();
    vector<int> ans(n,0);
    for(int i=0;i<n;i++)
    {
        ans[nums[i]]+=1;
        if(ans[nums[i]] == 2)
        {
            return nums[i];
        }
    }
    return 0;
}

int main()
{
    int n;
    cout<<"Enter size : ";
    cin>>n;

    vector<int> nums(n);
    cout<<"Enter element : ";
    for(int i=0;i<n;i++)
    {
        cin>>nums[i];
    }

    cout<<"Duplicate Element : "<<findDuplicate(nums);
    return 0;
}