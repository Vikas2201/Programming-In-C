/* Given an array of N integers arr[] where each element represents the max number of steps that can be made forward from 
that element. Find the minimum number of jumps to reach the end of the array (starting from the first element). 
If an element is 0, then you cannot move through that element. */

#include<bits/stdc++.h>
using namespace std;

int minimum_shift(int* a,int n)
{
    int maxr = a[0];
    int step = a[0];
    int jump = 1;
    if(a[0] == 0)
        return -1;
    else if(n == 1)
        return 0;
    else
    {
        for(int i=1;i<n;i++)
        {
            if(i == n-1)
            {
                return jump;
            }
            maxr = max(maxr,i+a[i]);
            step--;
            if(step == 0)
            {
                jump++;
                if(i >= maxr)
                    return -1;
                step = maxr - i;
            }
        }
    }
    return 0;
}

int main()
{
    int n;
    cout<<"Enter size of array : ";
    cin>>n;

    int a[n];
    cout<<"Enter element in an array : ";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    int shift = minimum_shift(a,n);
    cout<<"Minimum number of jump to reach the end : "<<shift;
    return 0;
}