/* Given a non-empty array of integers nums, every element appears twice except for one. Find that single one. */

#include<bits/stdc++.h>
using namespace std;

int singleNumber(vector<int>& nums) 
{
    int n = nums.size();
    if(n == 1)
        return nums[n-1];
    sort(nums.begin(),nums.end());
    for(int i=1;i<nums.size();i+=2)
    {
        if(nums[i]!=nums[i-1])
        {
            return nums[i-1];
        }
    }
    return nums[n-1];
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