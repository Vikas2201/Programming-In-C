#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n , arr[50] , mx , i;
    cout<<"Enter length of array : ";
    cin>>n;

    cout<<"Enter elements in array : ";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    mx = arr[0];
    for(i=0;i<n;i++)
    {
        mx = max(mx,arr[i]);
        cout<<"Maximum Element till "<<i+1<<" Position : "<<mx<<endl;
    }
    return 0;
}