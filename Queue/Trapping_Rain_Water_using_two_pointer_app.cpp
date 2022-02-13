#include<bits/stdc++.h>
using namespace std;

int rainwater_amount(vector<int> arr)
{
    int n= arr.size();
    int start = 0;
    int end = n-1;
    int left = 0, right = 0 , result = 0;
    while(start <= end)
    {
        if(left >= right)
        {
            result += max(0,right - arr[end]);
            right = max(right,arr[end]);
            end--;
        }
        else
        {
            result += max(0,left - arr[start]);
            left = max(left,arr[start]);
            start++;
        }
    }
    return result;
}

int main()
{
    int n;
    cout<<"\nENTER SIZE : ";
    cin>>n;

    vector<int> arr(n);
    cout<<"\nENTER ELEMENT : ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    cout<<"\nMAXIMUM AMOUNT OF RAINWATER STORE IN BETWEEN : "<<rainwater_amount(arr);
    return 0;
}