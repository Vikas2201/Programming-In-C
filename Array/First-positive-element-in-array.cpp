#include<bits/stdc++.h>
using namespace std;

int firstMissingPositive(vector<int>& nums) 
{
    int n = nums.size();
    int max = 10000;
    int arr[max] ; 
    arr[0]=1;
    
    for(int i=1;i<max;i++)
    {
        arr[i] = 0;
    }
        
    for(int i=0;i<n;i++)
    {
        if(nums[i] >0)
        {
            arr[nums[i]] = 1;
        }
    }
    for(int i=0;i<max;i++)
    {
        if(arr[i] == 0)
            return i;
    }
}
int main()
{
    int n;
    cout<<"Enter length of array : ";
    cin>>n;
    vector<int> nums(n);
    cout<<"Enter Element in array : ";
    for(int i=0;i<n;i++)
    {
        cin>>nums[i];
    }
    cout<<"First Positive Element : "<<firstMissingPositive(nums);
    return 0;
}