/* You are given a sorted unique integer array nums.

Return the smallest sorted list of ranges that cover all the numbers in the array exactly. 
That is, each element of nums is covered by exactly one of the ranges, and there is no integer x 
such that x is in one of the ranges but not in nums.

Each range [a,b] in the list should be output as:

    *  "a->b" if a != b
    *   "a" if a == b    */

#include<bits/stdc++.h>
using namespace std;

vector<string> summaryRanges(vector<int>& nums) 
{
    int n = nums.size();
    vector<string> ans;
    if(n == 0) 
        return ans;
    string r=to_string(nums[0]);
    int c=0;
    for(int i=1;i<n;i++)
    {
        if((long long int)nums[i]-(long long int)nums[i-1]==0)
            continue;
        if((long long int)nums[i]-(long long int)nums[i-1]==1) 
            c++;
        else
        {
            if(c>0)
            {
                r= r + "->";
                r= r + to_string(nums[i-1]);                    
            }
            c=0;
            ans.push_back(r);
            r = to_string(nums[i]);
        }
    }
    if(c>0)
    {
        r = r + "->";
        r = r + to_string(nums[nums.size()-1]);                    
    }
    ans.push_back(r);
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
    vector<string> str;
    str = summaryRanges(nums);
    cout<<"Summaries Range of given array : ";
    for(int i=0;i<str.size();i++)
    {
        cout<<str[i]<<" ";
    }
    return 0;
}

