#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n , m;
    cout<<"Enter row and column : ";
    cin>>n>>m;

    int a[n][m];
    cout<<"Enter element in 2D array : ";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }

    cout<<"Our Matrix : \n";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"Matrix Transpose : \n";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<a[j][i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}