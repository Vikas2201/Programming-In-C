#include<bits/stdc++.h>
using namespace std;

vector<int> longest_seq(vector<int> arr)
{
    int n= arr.size();

    vector<vector<int>> lis(n);
    lis[0].push_back(arr[0]);

    for(int i=1;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            if(arr[i] > arr[j] && lis[i].size() < lis[j].size()+1)
            {
                lis[i] = lis[j];
            }
        }
        lis[i].push_back(arr[i]);
    } 

    vector<int> max = lis[0];
    for( vector<int> i : lis)
    {
        if(i.size() > max.size())
        {
            max = i;
        }
    }
    return max;
}

int main()
{
    int n;
    cout<<"\nENTER SIZE : ";
    cin>>n;

    vector<int> arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    vector<int> res;
    res = longest_seq(arr);
    cout<<"\nLONGEST SUBSEQUENCE : ";
    for(auto i : res)
    {
        cout<<i<<" ";
    }
    return 0;
}