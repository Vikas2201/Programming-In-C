#include<iostream>
using namespace std;

int main()
{
    int n , i , j , space;
    cout<<"Enter number of rows : ";
    cin>>n;

    for (i=0;i<n;i++)
    {
        for(j=0;j<=i;j++)
        {
            cout<<"*";
        }
        space = 2*n - 2*i ;
        for(j=0;j<space;j++)
        {
            cout<<" ";
        }
        for(j=0;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    } 
    for(i=n;i>=0;i--)
    {
        for(j=0;j<=i;j++)
        {
            cout<<"*";
        }
        space = 2*n - 2*i ;
        for(j=0;j<space;j++)
        {
            cout<<" ";
        }
        for(j=0;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl; 
    }
    return 0;
}