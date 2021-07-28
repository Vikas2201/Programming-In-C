/* In an array, arr , the elements at indices i , j and  (where i < j ) form an inversion if arr[i] > arr[j]. 
In other words, inverted elements arr[i] and arr[j] are considered to be "out of order". 
To correct an inversion, we can swap adjacent elements. */

#include<bits/stdc++.h>
using namespace std;

long long Merge(vector<int> & nums , int l , int mid , int r)
{
    long long inversion = 0;
    int n1 = mid - l + 1;
    int n2 = r - mid;

    vector<int> a(n1);
    vector<int> b(n2);

    for(int i=0;i<n1;i++)
    {
        a[i] = nums[l+i];
    }
    for(int i=0;i<n2;i++)
    {
        b[i] = nums[mid+i+1];
    }

    int i =0 , j=0 , k=l;
    while(i < n1 && j < n2)
    {
        if(a[i] <= b[j])
        {
            nums[k] = a[i];
            i++;
            k++;
        }
        else
        {
            nums[k] = b[j];
            inversion = inversion + n1 - i;
            j++;
            k++;
        }
    }
    while(i<n1)
    {
        nums[k] = a[i];
        i++;k++;
    }
    while(j<n2)
    {
        nums[k] = b[j];
        j++;k++;
    }
    return inversion;
}

long long merge_sort(vector<int> & nums , int l , int r)
{
    long long inversion = 0;
    if(l < r)
    {
        int mid = (l+r)/2;
        inversion += merge_sort(nums,l,mid);
        inversion += merge_sort(nums,mid+1,r);
        inversion += Merge(nums,l,mid,r);
    }
    return inversion;
}

int main()
{
    int n;
    cout<<"Enter length of array : ";
    cin>>n;

    vector<int> nums(n);
    cout<<"Enter Element in array : ";
    for(int i=0;i<n;i++)
    {
        cin>>nums[i];
    }

    cout<<"Total Number Of Inversion : "<<merge_sort(nums,0,n-1);
    return 0;
}
