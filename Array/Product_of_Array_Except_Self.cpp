/* Given an integer array nums, return an array answer such that answer[i] is equal to 
the product of all the elements of nums except nums[i].

The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.

You must write an algorithm that runs in O(n) time and without using the division operation. */

#include<bits/stdc++.h>
using namespace std;

vector<int> productExceptSelf(vector<int>& nums) 
{
    int n = nums.size();
    vector<int> ans(n);
    int prod = 1;
    for(int i=0;i<n;i++)
    {
        ans[i] = prod;
        prod = prod * nums[i];
    }
    prod = 1;
    for(int i=n-1;i>=0;i--)
    {
        ans[i] = ans[i] * prod;
        prod = prod * nums[i];
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

    vector<int> answer;
    answer = productExceptSelf(nums);
    cout<<"Product of array except itself : ";
    for(int i=0;i<answer.size();i++)
    {
        cout<<answer[i]<<" ";
    }
    return 0;
}