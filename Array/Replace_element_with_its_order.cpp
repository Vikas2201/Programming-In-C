#include<bits/stdc++.h>
using namespace std;

bool compare(pair<int,int> p1 , pair<int,int> p2)
{
    return p1.first < p2.first;
}

void replace_postition(int* arr , int n)
{
    vector< pair<int,int>> nums;
    for(int i=0;i<n;i++)
    {
        nums.push_back(make_pair(arr[i],i));
    }

    sort(nums.begin(),nums.end(),compare);

    for(int i=0;i<nums.size();i++)
    {
        arr[nums[i].second] = i;
    }

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int n;
    cout<<"Enter size of array : ";
    cin>>n;

    int arr[n];
    cout<<"Enter element in array : ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    replace_postition(arr,n);
    return 0;
}