#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[50] , n , max_no , min_no;
    cout<<"Enter Length of array : ";
    cin>>n;

    cout<<"Enter elements in array : ";
    for(int i=0; i<n ;i++)
    {
        cin>>arr[i];
    }

    max_no = INT_MIN;
    min_no = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        max_no = max(max_no,arr[i]);
        min_no = min(min_no,arr[i]);
    }

    cout<<"Maximum Number In Array : "<<max_no;
    cout<<"\nMinmum Number In Array : "<<min_no;

    return 0;
}