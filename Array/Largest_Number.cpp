/* Given a list of non-negative integers nums, arrange them such that they form the largest number.

Note: The result may be very large, so you need to return a string instead of an integer. */

#include<bits/stdc++.h>
using namespace std;

bool static cmp(const int a,const int b)
{
    string s1=to_string(a);
    string s2= to_string(b);
        
    return s1+s2 > s2+s1;
}
    
string largestNumber(vector<int>& nums) 
{
    int n = nums.size();
    sort(nums.begin(),nums.end(),cmp);
        
    string ans ="";
    for(int i=0;i<n;i++)
    {
        ans+= to_string(nums[i]);
    }
        
    if(nums[0]==0)
    {
        return "0";
    }
    return ans;
}

int main()
{
    int n;
    cout<<"\nENTER SIZE : ";
    cin>>n;

    vector<int> nums(n);
    cout<<"\nENTER VALUES IN LIST : ";
    for(int i=0;i<n;i++)
    {
        cin>>nums[i];
    }

    cout<<"\nLARGEST NUMBER FORMED BY GIVEN LIST : "<<largestNumber(nums);
    return 0;
}