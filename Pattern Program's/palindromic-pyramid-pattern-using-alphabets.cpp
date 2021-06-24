#include<iostream>
using namespace std;

int main()
{
    int n , i , j;
    
    cout<<"Enter number of rows : ";
    cin>>n;

    for(i=1;i<=n;i++)
    {
        char ch = 'A';
        for(j=1;j<=i;j++)
        {
            cout<<char(ch)<<" ";
            ch = ch + 1;
        }
        ch = ch - 1;
        for(j=1;j<i;j++)
        {
            ch = ch - 1;
            cout<<char(ch)<<" ";
        }
        cout<<endl;
    }
}