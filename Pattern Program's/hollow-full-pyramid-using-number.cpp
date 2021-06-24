#include<iostream>
using namespace std;

int main()
{
    int n , i ,j ;
    cout<<"Enter number of rows : ";
    cin>>n;

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
        {
            cout<<" ";
        }
        for(j=1;j<=i;j++)
        {
            if(i == n || j == 1 )
            {
                cout<<j<<" ";
            }
            else
            {
                cout<<" ";
            }
        }
        for(j=1;j<i;j++)
        {
            if(j == i-1 && j < n-1)
            {
                cout<<j+1;
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }
}