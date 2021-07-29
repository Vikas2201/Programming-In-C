/* Given an integer array nums, return the length of the longest strictly increasing subsequence.

A subsequence is a sequence that can be derived from an array by deleting some or no elements without changing 
the order of the remaining elements. */

#include<bits/stdc++.h>
using namespace std;

int lengthOfLIS(vector<int>& nums) 
{
    vector<int> sub;
    sub.push_back(nums[0]);
    for(int i=1; i<nums.size(); i++) 
    {
        if(sub[sub.size()-1] < nums[i]) 
        {
            sub.push_back(nums[i]);
        }
        else 
        {
            for(int j=0; j < sub.size(); j++) 
            {
                if(sub[j] >= nums[i]) 
                {
                    sub[j] = nums[i];
                    break;
                }
            }
        }
    }
    return sub.size();
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

    cout<<"Length of Longest Increasing Sub sequence : "<<lengthOfLIS(nums);
    return 0;
}