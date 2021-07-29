/* Given an integer array nums and an integer k, 
return true if there are two distinct indices i and j in the array such that nums[i] == nums[j] and abs(i - j) <= k. */

#include<bits/stdc++.h>
using namespace std;

bool containsNearbyDuplicate(vector<int>& nums, int k) 
{
    map<int,int>m;
    int i, n = nums.size();
    for(i=0;i<n;i++)
    {
        if(m.find(nums[i])!=m.end())
        {
            if(i-m[nums[i]]<=k)
                return true;
            m[nums[i]] = i;
        }
        else
            m[nums[i]] = i;
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

    int k;
    cout<<"Enter k : ";
    cin>>k;

    if(containsNearbyDuplicate(nums,k))
    {
        cout<<"It contain duplicate element in the given range";
    }
    else
    {
        cout<<"It does not contain duplicate element in the given range";
    }
    return 0;
}