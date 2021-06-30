#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i;
    cout<<"Enter length of array : ";
    cin>>n;

    int arr[n];
    cout<<"Enter elements in array : ";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int cd = arr[1]-arr[0]; // common diiference
    int ans = 2 ; // Maximum arithmetic subarray length
    int len = 2 ; // Current arithmetic subarray length
    int j = 2;
    while(j<n)
    {
        if(cd == arr[j]-arr[j-1])
        {
            len++ ;
        }
        else
        {
            cd = arr[j] - arr[j-1];
            len = 2;
        }
        ans = max(ans,len);
        j++;
    }
    cout<<"Maximum arithmetic subarray length : "<<ans;
    return 0;
}