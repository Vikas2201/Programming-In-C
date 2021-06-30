#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter length of array : ";
    cin>>n;

    int a[n];
    cout<<"Enter element of array : ";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    int s;
    cout<<"Enter Sum of subarray : ";
    cin>>s;

    int flag = 1;

    for(int i=0;i<n;i++)
    {
        int sum =0;
        int subarray[n] = {0}; // subarray
        int k =0;
        for(int j =i ;j<n;j++)
        {
            sum = sum + a[j];
            subarray[k] = a[j];
            k++;
            if(sum == s)
            {
                cout<<"\nSubarray : ";
                for(int l =0 ; l<k;l++)
                {
                    cout<<subarray[l]<<" ";
                }
                flag = 0;
                return 0 ;
            }
            else if(sum > s)
            {
                break ;
            }
        }
    }
    if(flag == 1)
    {
        cout<<"Subarray with given sum not found";
    }
    return 0;
}