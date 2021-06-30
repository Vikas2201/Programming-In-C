#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n , m ;
    cout<<"Enter row and column : ";
    cin>>n>>m;
    
    int a[n][m];
    cout<<"Enter Element in 2D array : ";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }

    int k ;//element that search
    cout<<"Enter element for searching : ";
    cin>>k;

    int r = 0 , c = m-1;
    bool flag;
    while(r < n && c >=0)
    {
        if(a[r][c] == k)
        {
            flag =  true;
        }
        else if(a[r][c] > k)
        {
            c--;
        }
        else
        {
            r++;
        }
    }
    if(flag)
    {
        cout<<"Element found in "<<r+1<<" Row and "<<c+1<<" Column";
    }
    else
    {
        cout<<"Element does not exit ";
    }
    return 0;
}