#include<iostream>
using namespace std;

int main()
{
    int n , i , j;
    cout<<"Enter number of rows : ";
    cin>>n;
    for(i=n;i>0;i--)
    {
        for(j=0;j<i-1;j++)
        {
            cout<<" ";
        }
        for(j=0;j<n;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}