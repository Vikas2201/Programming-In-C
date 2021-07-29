/* You are given an integer array nums and you have to return a new counts array. 
The counts array has the property where counts[i] is the number of smaller elements to the right of nums[i]. */

#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
#define ordered_set tree<int, null_type,less_equal<int>, rb_tree_tag,tree_order_statistics_node_update>
vector<int> countSmaller(vector<int>& nums) 
{
    ordered_set s;
    vector<int>ans;
    int n=nums.size();
    for(int i=n-1;i>=0;i--)
    {
        ans.push_back(s.order_of_key(nums[i]));
        s.insert(nums[i]);
    }
    reverse(ans.begin(),ans.end());
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

    vector<int> ans;
    ans = countSmaller(nums);

    cout<<"count of the numbers : ";
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
    return 0;
}
