/* Given a list of non-negative integers nums, arrange them such that they form the largest number.

Note: The result may be very large, so you need to return a string instead of an integer. */

#include<bits/stdc++.h>
using namespace std;

string largestNumber(vector<int>& nums) 
{
    string str = "";
    int n = nums.size();
    if(n==1)
    {
        return to_string(nums[0]);
    }
    else
    {
        map<int, string, greater <int> > m;
        for(int i=0;i<n;i++)
        {
            m.insert({nums[i]%10,to_string(nums[i])});
        }
    
        for(auto &i : m)
        {
            str = str + i.second ;
        }
        
        return str;
    }
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