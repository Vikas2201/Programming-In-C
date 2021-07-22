/* Given an unsorted array of integers nums, return the length of the longest consecutive elements sequence. */

#include<bits/stdc++.h>
using namespace std;

int longestConsecutive(vector<int>& nums) 
{
    vector<int> store;
    sort(nums.begin(),nums.end());
        
    vector<int>::iterator ip;
    ip = unique(nums.begin(), nums.begin() + nums.size());
    nums.resize(distance(nums.begin(), ip));
        
    int n = nums.size();
    if(n == 0 || n == 1)
        return n;
    int count = 1;
    for (int i=0;i<n-1;i++)
    {
        if(nums[i]+1 == nums[i+1])
        {
            count++;
        }
        else
        {
            store.push_back(count);
            count = 1;
        }
    }
    store.push_back(count);
    return *max_element(store.begin(),store.end());
}

int main()
{
    int n;
    cout<<"Enter size of array : ";
    cin>>n;

    vector<int> nums(n);
    cout<<"Enter Element in an array : ";
    for(int i=0;i<n;i++)
    {
        cin>>nums[i];
    }

    cout<<"Length of Longest Subsequence in Array : "<<longestConsecutive(nums);
    return 0; 
}