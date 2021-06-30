#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, m ;
    cout<<"Enter row and column : ";
    cin>>n>>m;

    int a[n][m];
    cout<<"Enter element in 2D array : ";
    for(int i =0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }

    int row_start = 0 , row_end = n-1;
    int col_start = 0 , col_end = n-1;

    cout<<"Spiral Print : ";
    while(row_start < row_end && col_start < col_end)
    {
        //for starting row
        for(int i=col_start ; i<=col_end ; i++)
        {
            cout<<a[row_start][i]<<" ";
        }

        row_start++ ;
        // for ending column
        for(int i = row_start ; i<=row_end ; i++)
        {
            cout<<a[i][col_end]<<" ";
        }
        col_end--;

        // for ending row
        for(int i = col_end ; i>= col_start ; i--)
        {
            cout<<a[row_end][i]<<" ";
        }
        row_end-- ;

        //for starting column
        for(int i=row_end ; i>=row_start ; i--)
        {
            cout<<a[i][col_start]<<" ";
        }
        col_start++ ;
    }
    return 0;
}