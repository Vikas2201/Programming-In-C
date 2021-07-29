/* You are given an array of integers nums, there is a sliding window of size k which is moving from
the very left of the array to the very right. You can only see the k numbers in the window. 
Each time the sliding window moves right by one position.

Return the max sliding window. */

#include<bits/stdc++.h>
using namespace std;

vector<int> maxSlidingWindow(vector<int>& nums, int k) 
{
    int n = nums.size();
    vector<int> ans;
    for(int i=0;i<=n-k;i++)
    {
        int Max = INT_MIN;
        for(int j=0;j<k;j++)
        {
            Max = max(Max,nums[i+j]);
        }
        ans.push_back(Max);
    }
    return ans;
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

    int k;
    cout<<"Enter Window size : ";
    cin>>k;

    vector<int> Max;
    Max = maxSlidingWindow(nums,k);
    cout<<"Maximum element present in windows : ";
    for(int i=0;i<Max.size();i++)
    {
        cout<<Max[i]<<" ";
    }
    return 0;
}