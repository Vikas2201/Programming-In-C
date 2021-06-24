#include<iostream>
using namespace std;

int main()
{
    int n , i,j,k;
    cout<<"Enter no. of rows : ";
    cin>>n;
    for(i=0;i<n;i++)
    {
        for(j=n-1;j>=i;j--)
        {
            cout<<" ";
        }
        for(k=0;k<=i;k++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}