/* Given an integer array of size n, find the maximum of the minimum(s) of every window size in the array. 
The window size varies from 1 to n. */

#include<bits/stdc++.h>
using namespace std;

vector<long> riddle(vector<long> arr) 
{
    vector<long> vRst;
    for ( long i = 0; i < arr.size(); i++ )
    {
        vector<long> vMin;
        auto it = arr.begin();
        for ( ; it != arr.end()-i; it++ )
        {
            vector<long> vec;
            vec.assign(it, it+i+1);
            auto itMin = min_element(vec.begin(), vec.end());
            vMin.push_back(*itMin);
        }

        auto itMax = max_element(vMin.begin(), vMin.end());
        vRst.push_back(*itMax);
    }
    
    return vRst;
}

int main()
{
    long n ;
    cout<<"\nENTER SIZE : ";
    cin>>n;

    vector<long> arr(n);
    cout<<"\nENTER ELEMENT : ";
    for(long i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    vector<long> result ;
    result = riddle(arr);
    cout<<"\nMAXIMUM RIDDLES IN EACH WINDOW : ";
    for(auto i : result)
    {
        cout<<i<<" ";
    }
    return 0;
}