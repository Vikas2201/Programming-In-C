#include<bits/stdc++.h>
using namespace std;

int count(vector<int> a,int k)
{
    int count_zeros = 0 , j = 0 , ans = INT_MIN;
    for(int i=0;i<a.size();i++)
    {
        if(a[i] == 0)
        {
            count_zeros++;
        }
        while(count_zeros > k)
        {
            if(a[j] == 0)
                count_zeros--;
            j++;
        }
        ans = max(ans,i-j+1);
    }
    return ans;
}

int main()
{
    int n;
    cout<<"\nENTER SIZE : ";
    cin>>n;

    vector<int> arr(n);
    cout<<"\nENTER VALUES IN ARRAY : ";
    for(auto &i : arr)
    {
        cin>>i;
    }

    int k;
    cout<<"ENTER VALUE OF K : ";
    cin>>k;

    cout<<"MAXIMUM NUMBER OF 1's PRESENT IN ARRAY AFTER REPLACING "<<k<<" ZERO'S : "<<count(arr,k);
    return 0;
}