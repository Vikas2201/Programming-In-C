/* Given an array, rotate the array to the right by k steps, where k is non-negative. */

#include<bits/stdc++.h>
using namespace std;

void rotate(vector<int>& nums, int k) 
{
    int n = nums.size();
    vector<int> num;
    k=k%nums.size();
    for(int i =n-k ; i<n;i++)
    {
        num.push_back(nums[i]);
    }
    for(int i=0;i<n-k;i++)
    {
        num.push_back(nums[i]);
    }
    for(int i=0;i<n;i++)
    {
        nums[i] = num[i];
    }
}

int main()
{
    int n;
    cout<<"Enter Size : ";
    cin>>n;

    vector<int> nums(n);
    cout<<"Enter Element : ";
    for(int i=0;i<n;i++)
    {
        cin>>nums[i];
    }

    int k;
    cout<<"Enter Value Of Steps : ";
    cin>>k;

    rotate(nums,k);
    
    cout<<"After Rotating : ";
    for(int i=0;i<n;i++)
    {
        cout<<nums[i]<<" ";
    }
    return 0;
}