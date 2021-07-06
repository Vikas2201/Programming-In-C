
#include<bits/stdc++.h>
using namespace std;

void subset( int* arr , int n)
{
    for ( int i =0;i<(1<<n);i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i & (1<<j))
            {
                cout<<arr[j]<<" ";
            }
        }
        cout<<endl;
    } 
}

int main()
{
    int n;

    cout<<"Enter size of array : ";
    cin>>n;

    int num[n];
    cout<<"Enter number : ";
    for(int i=0;i<n;i++)
    {
        cin>>num[i];
    }

    subset(num,n);
    return 0;
    
}