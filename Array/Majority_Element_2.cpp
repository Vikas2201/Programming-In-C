/* Given an integer array of size n, find all elements that appear more than ⌊ n/3 ⌋ times. */

#include<bits/stdc++.h>
using namespace std;

vector<int> majorityElement(vector<int>& nums) 
{
    set<int>ans;
    sort(nums.begin(),nums.end());
    int n = nums.size();
    int k = n/3;
    for(int i=0;i<nums.size()- k;++i)
    {
        if(nums[i] == nums[i+k])
        {
            ans.insert(nums[i]);
            i=i+k;
        }
    }
    vector<int>final_ans;
    for(auto i : ans)
    {
        final_ans.push_back(i);
    }
    return final_ans;
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

    vector<int> result;
    result = majorityElement(nums);
    cout<<"Majority Element in the given array : ";
    for(int i=0;i<result.size();i++)
    {
        cout<<result[i]<<" ";
    }
    return 0;
}