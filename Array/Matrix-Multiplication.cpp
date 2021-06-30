#include<bits/stdc++.h>
using namespace std;

void multiply(int a[][10], int b[][10] , int n1 , int m1 , int m2)
{
    int c[n1][m2] ;

    for(int i=0;i<n1;i++)
    {
        for(int j=0;j<m2;j++)
        {
            c[i][j] = 0;
        }
    }

    for(int i=0;i<n1;i++)
    {
        for(int j = 0; j < m2 ; j++)
        {
            for(int k=0;k<m1;k++)
            {
                c[i][j] = c[i][j] + a[i][k] * b[k][j] ;
            }
        }
    }
    cout<<"MUltiplication of two Matrix : \n";
    for(int i=0;i<n1;i++)
    {
        for(int j=0;j<m2;j++)
        {
            cout<<c[i][j]<<" ";
        }
        cout<<endl;
    }
    return ;
}

int main()
{
    int n1 , m1 , n2 , m2;
    cout<<"Enter row and column for 1st matrix : ";
    cin>>n1>>m1;

    cout<<"Enter row and column for 2nd matrix : ";
    cin>>n2>>m2 ; 
    
    if(n2 == m1)
    {
        int a[10][10] , b[10][10];
        cout<<"Enter element for 1st matrix : ";
        for(int i=0;i<n1;i++)
        {
            for(int j=0;j<m1;j++)
            {
                cin>>a[i][j];
            }
        }

        cout<<"Enter element for 2nd Matrix : ";
        for(int i=0;i<n1;i++)
        {
            for(int j=0;j<m1;j++)
            {
                cin>>b[i][j];
            }
        }

        multiply(a,b,n1,n2,m2);
    }
    else
    {
        cout<<"Plz Enter Correct data ";
    }
    return 0 ;

}