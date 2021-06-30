/* Given a random integer array and a number x. 
Find and print the triplets of elements in the array which sum to x. 

While printing a triplet, print the smallest element first. */

#include<bits/stdc++.h>
using namespace std;

void triplet_sum(int *a,int n , int sum)
{
    int high , low ;
    for(int i=0;i<n-2;i++)
    {
        low = i+1;
        high = n-1;

        while(low < high)
        {
            if(a[i]+a[low]+a[high] == sum)
            {
                cout << "(" <<a[i] << ", "<<a[low]<<", "<<a[high] << ")" << endl;
            }
            if(a[i]+a[low]+a[high] > sum)
            {
                high --;
            }
            else
            {
                low++;
            }
        }
    }
}

int main()
{
    int n ;
    cout<<"Enter elength of array : ";
    cin>>n;

    int a[n];
    cout<<"Enter elements in array : ";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    int sum ;
    cout<<"Enter sum : ";
    cin>>sum;

    sort(a,a+n);

    triplet_sum(a,n,sum);
    return 0;
}