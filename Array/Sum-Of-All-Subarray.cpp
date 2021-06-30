#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n , arr[50] ,i, j, sum ;
    cout<<"Enter length of array : ";
    cin>>n;

    cout<<"Enter elements in array : ";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    for(i=0;i<n;i++)
    {
        sum = 0;
        int sub_arr[100] = {0};
        int k =0;
        for(j=i;j<n;j++)
        {
            sub_arr[k] = arr[j];
            k++;
            sum = sum + arr[j];
            cout<<"\nSubarray : [ ";
            for(int l =0;l<k;l++)
            {
                cout<<sub_arr[l]<<",";
            }
            cout<<"] and Its Sum : "<<sum;
        }
    }
    return 0;
}