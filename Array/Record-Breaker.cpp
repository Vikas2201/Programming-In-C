#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n ;
    cout<<"Enter No. Of Days : ";
    cin>>n;
    
    int arr[n+1];
    cout<<"Enter Records of each day : ";
    for(int i=0 ;i<n;i++)
    {
        cin>>arr[i];
    }
    arr[n] = -1;

    int mx = INT_MIN , record = 0;
    if(n == 1)
    {
        cout<<"Total Number Of Record Breaking days : "<<1;
        return 0;
    }
    else
    {
        for(int i=0;i<n;i++)
        {
            if(arr[i] > mx && arr[i] > arr[i+1])
            {
                record++;
            }
            mx = max(mx,arr[i]);
        }
        cout<<"Total Number Of Record Breaking days : "<<record;
    }
    return 0;
}