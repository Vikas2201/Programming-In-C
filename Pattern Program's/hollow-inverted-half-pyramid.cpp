#include<iostream>
using namespace std;

int main()
{
    int n , i , j;
    cout<<"Enter Number of Rows : ";
    cin>>n;

    for(i=n;i>0;i--)
    {
        for(j=1;j<=i;j++)
        {
            if(j==1||i==n||i==j)
            {
               cout<<"*"; 
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}