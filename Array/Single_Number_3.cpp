/* Given an integer array nums, in which exactly two elements appear only once and all the other elements appear exactly twice. 
Find the two elements that appear only once. You can return the answer in any order.

You must write an algorithm that runs in linear runtime complexity and uses only constant extra space. */

#include<bits/stdc++.h>
using namespace std;

vector<int> singleNumber(vector<int>& nums) 
{
    int n = nums.size();
    vector<int> result;
    sort(nums.begin(),nums.end());
    for(int i=0 ; i<n-1;)
    {
        if(nums[i] != nums[i+1])
        {
            result.push_back(nums[i]);
            i++;
        }
        else
        {
            i= i+2;
        }
    }
    if(nums[n-1] != nums[n-2])
        result.push_back(nums[n-1]);
    return result;
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
    result = singleNumber(nums);
    cout<<"Single Element Present in Array : ";
    for(int i=0;i<result.size();i++)
    {
        cout<<result[i]<<" ";
    }
    return 0;
}