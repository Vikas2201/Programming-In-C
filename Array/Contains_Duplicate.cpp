/* Given an integer array nums, return true if any value appears at least twice in the array, 
and return false if every element is distinct. */

#include<bits/stdc++.h>
using namespace std;

bool containsDuplicate(vector<int>& nums) 
{
    int n = nums.size();
    sort(nums.begin(),nums.end());
    for(int i=0;i<n-1;i++)
    {
        if(nums[i] == nums[i+1])
        {
            return true;
        }
    }
    return false;
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

    if(!containsDuplicate(nums))
    {
        cout<<"It Does Not Contain Duplicates Element";
    }
    else
    {
        cout<<"It Contain Duplicates Element";
    }
    return 0;
}