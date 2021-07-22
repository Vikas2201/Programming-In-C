/* Given an integer array nums, 
find a contiguous non-empty subarray within the array that has the largest product, and return the product. */

#include<bits/stdc++.h>
using namespace std;

int maxProduct(vector<int>& nums) 
{
    int n = nums.size();
    int Max = INT_MIN;
    if(n == 1)
        return nums[0];
    for(int i =0;i<n;i++)
    {
        int prod = 1;
        for(int j = i ; j<n ; j++)
        {
            prod = prod * nums[j];
            Max = max(Max,prod);
        }
    }
    return Max;
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

    cout<<"Product Of Largest SubArray : "<<maxProduct(nums);
    return 0;
}

