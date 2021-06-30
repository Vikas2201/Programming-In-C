#include<bits/stdc++.h>
using namespace std;

void sort(int * a , int n)
{
    int temp ;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i;j++)
        {
            if(a[j]>a[j+1])
            {
                temp = a[j+1];
                a[j+1] = a[j];
                a[j] = temp;
            }
        }
    }
}

void pair_sum(int * a, int n , int k)
{
    int low = 0;
    int high = n-1;
    while(low < high)
    {
        if(a[low] + a[high] == k)
        {
            cout<<"Pair sum element found at "<<low + 1<<" and "<< high + 1<<" position in a sorted array." ;
            return ;  
        }
        else if(a[low] + a[high] < k)
        {
            low++ ;
        }
        else if(a[low] + a[high] > k)
        {
            high--;
        }
    }
}

int main()
{
    int n ;
    cout<<"Enter length of array : ";
    cin>>n;

    int a[n];
    cout<<"Enter element in array : ";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    int k;
    cout<<"Enter sum of two element : ";
    cin>>k;

    sort(a,n);

    cout<<"Sorted array : ";
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }

    pair_sum(a,n,k);
    return 0;
}