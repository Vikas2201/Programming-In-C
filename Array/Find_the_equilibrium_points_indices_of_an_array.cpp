/* Equilibrium index of an array is an index such that the sum of elements at lower indexes is equal 
to the sum of elements at higher indexes. */


#include<bits/stdc++.h>
using namespace std;

int equilibrium(int arr[],int n)
{
    int sum =0 , left_sum = 0;
    for(int i=0;i<n;i++)
    {
        sum += arr[i];
    }
    for(int i=0;i<n;i++)
    {
        sum -=arr[i];
        if(sum == left_sum)
        {
            return i;
        }
        left_sum += arr[i];
    }
    return -1;
}

int main()
{
    int n;
    cout<<"\nENTER SIZE OF ARRAY : ";
    cin>>n;

    int arr[n];
    cout<<"\nENTER ELEMENT IN ARRAY : ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    cout<<"\nEQUILIBRIUM POINT OF GIVEN ARRAY : "<<equilibrium(arr,n);
    return 0;
}