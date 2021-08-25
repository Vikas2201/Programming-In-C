/* We define the following:

A subarray of array a of length n is a contiguous segment from a[i] through a[j] where 0 <= i <= j < n.
The sum of an array is the sum of its elements.

Given an n element array of integers, a ,and an integer, m ,
determine the maximum value of the sum of any of its subarrays modulo m. */

#include<bits/stdc++.h>
using namespace std;

long maximumSum(vector<long> a, long m) 
{
    long sum = 0;
    long n = a.size();
    long mod = 0;
    long Max = LONG_MIN , result = LONG_MAX;
    set<long> s;
    
    for(long i=0;i<n;i++)
    {
        sum = (sum + a[i])%m;
        a[i] = sum;
        Max = max(Max,sum);
    }
    for (auto x: a) 
    {
        auto p = s.insert(x);
        if (++p.first != s.end()) 
        {
            result = min(*p.first - x, result);
        }
    }
    return max(Max, m - result);
}

int main()
{
    long n , m , value;
    vector<long> a;

    cout<<"ENTER SIZE OF ARRAY : ";
    cin>>n;

    cout<<"ENTER VALUES IN ARRAY : ";
    for(long i=0;i<n;i++)
    {
        cin>>value;
        a.push_back(value);
    }

    cout<<"ENTER MODULO VALUE : ";
    cin>>m;

    cout<<"MAXIMUM SUM OF SUBARRAY MODULO "<<m<<" : "<<maximumSum(a,m);
    return 0;
}