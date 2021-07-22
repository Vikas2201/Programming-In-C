/* Given an integer array nums sorted in non-decreasing order, 
remove some duplicates in-place such that each unique element appears at most twice. 
The relative order of the elements should be kept the same.

Since it is impossible to change the length of the array in some languages, 
you must instead have the result be placed in the first part of the array nums. More formally, 
if there are k elements after removing the duplicates, then the first k elements of nums should hold the final result. 
It does not matter what you leave beyond the first k elements.

Return k after placing the final result in the first k slots of nums. */

#include<bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int>& nums) 
{
    int i = 2;
    int n = nums.size();
    if(n<3)
        return n;
    for(int j = 2;j<n;j++)
    {
        if(nums[j] != nums[i-2])
        {
            nums[i] = nums[j];
            i++;
        }
    }
    return i;
}

int main()
{
    int n;
    cout<<"Enter Size of array : ";
    cin>>n;

    vector<int> nums(n);
    cout<<"Enter Element in array : ";
    for(int i=0;i<n;i++)
    {
        cin>>nums[i];
    }
    int k = removeDuplicates(nums);
    cout<<"After Removing Duplicates From Array : ";
    for(int i=0;i<k;i++)
    {
        cout<<nums[i]<<" ";
    }
    return 0;
}