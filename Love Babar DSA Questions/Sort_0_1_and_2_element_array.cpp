#include<bits/stdc++.h>
using namespace std;

void Sort(int* arr , int n)
{
    int i =0 , c0 = 0 , c1 = 0 , c2 = 0;
    for(;i<n;i++)
    {
        if(arr[i] == 0)
        {
            c0++;
        }
        else if(arr[i] == 1)
        {
            c1++;
        }
        else if(arr[i] == 2)
        {
            c2++;
        }
    }
    i = 0;
    while(c0)
    {
        arr[i] = 0;
        i++;
        c0--;
    }
    while(c1)
    {
        arr[i] = 1;
        i++;
        c1--;
    }
    while(c2)
    {
        arr[i] = 2;
        i++;
        c2--;
    }
    return ;
}

int main()
{
    int n;
    cout<<"Enter size of array : ";
    cin>>n;

    int arr[n];
    cout<<"Enter array which consists only 0, 1 and 2 : ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    Sort(arr,n);

    cout<<"After sorting array : ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}