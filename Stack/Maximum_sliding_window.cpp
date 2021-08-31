#include<bits/stdc++.h>
using namespace std;

vector<int> max_window(vector<int> arr , int k)
{
    int n = arr.size();
    deque<int> q;
    vector<int> ans;
    for(int i=0;i<k;i++)
    {
        while(!q.empty() && arr[q.back()] < arr[i])
        {
            q.pop_back();
        }
        q.push_back(i);
    }
    ans.push_back(arr[q.front()]);
    for(int i=k;i<n;i++)
    {
        if(q.front() == i-k)
        {
            q.pop_front();
        }
        while(!q.empty() && arr[q.back()] < arr[i])
        {
            q.pop_back();
        }
        q.push_back(i);
        ans.push_back(arr[q.front()]);
    }
    return ans;
}

int main()
{
    int n;
    cout<<"\nENTER SIZE OF ARRAY : ";
    cin>>n;

    vector<int> arr(n);
    cout<<"\nENTER ELEMENT IN ARRAY : ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int k;
    cout<<"\nENTER WINDOW SIZE : ";
    cin>>k;
    vector<int> result ;
    result = max_window(arr,k);

    cout<<"\nMAXIMUM ELEMENT IN EACH SLIDING WINDOW : ";
    for(auto i : result)
    {
        cout<<i<<" ";
    }
    return 0;
}