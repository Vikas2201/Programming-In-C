/* You are given an unordered array consisting of consecutive integers  [1, 2, 3, ..., n] without any duplicates. 
You are allowed to swap any two elements. 
Find the minimum number of swaps required to sort the array in ascending order. */

#include<bits/stdc++.h>
using namespace std;

void swap(vector<int> &arr,int i , int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

int minimumSwaps(vector<int> arr) {
    int n=arr.size();
    int ans =0;
    vector<int> temp = arr;
    map<int,int> h;
    sort(temp.begin(),temp.end());
    
    for(int i=0;i<n;i++)
    {
        h[arr[i]] =i;
    }
    
    for(int i=0;i<n;i++)
    {
        if(arr[i] != temp[i])
        {
            ans++;
            int j = arr[i];
            swap(arr,i,h[temp[i]]);
            h[j] = h[temp[i]];
            h[temp[i]] = i;
        }
    }
    return ans;
}

int main()
{
    int n;
    cout<<"enter size : ";
    cin>>n;

    vector<int> arr(n);
    cout<<"Enter element : ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    cout<<"Minimum Number of swap required to sort a array : "<<minimumSwaps(arr);
    return 0;
}