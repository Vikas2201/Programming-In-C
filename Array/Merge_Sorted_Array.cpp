/* You are given two integer arrays nums1 and nums2, sorted in non-decreasing order, and two integers m and n, 
representing the number of elements in nums1 and nums2 respectively.

Merge nums1 and nums2 into a single array sorted in non-decreasing order.

The final sorted array should not be returned by the function, but instead be stored inside the array nums1.
To accommodate this, nums1 has a length of m + n, where the first m elements denote the elements that should be merged, 
and the last n elements are set to 0 and should be ignored. nums2 has a length of n. */

#include<bits/stdc++.h>
using namespace std;

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) 
{
    for(int i=0;i<n;i++)
    {
        nums1[m+i] = nums2[i];
    }
    sort(nums1.begin(),nums1.end());
    return;
}

int main()
{
    int m , n;
    cout<<"Enter Size Of 1st and 2nd array : ";
    cin>>m>>n;

    vector<int> nums1(m+n,0);
    vector<int> nums2(n);

    cout<<"Enter Element in 1st array : ";
    for(int i=0;i<m;i++)
    {
        cin>>nums1[i];
    }
    cout<<"Enter Element in 2nd array : ";
    for(int i=0;i<n;i++)
    {
        cin>>nums2[i];
    }

    merge(nums1,m,nums2,n);
    cout<<"After Merging Array will be : ";
    for(int i=0;i<(m+n);i++)
    {
        cout<<nums1[i]<<" ";
    }
    return 0;
}