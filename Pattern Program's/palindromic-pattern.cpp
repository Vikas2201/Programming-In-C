#include<iostream>
using namespace std;

int main()
{
    int n , i ,j ;
    cout<<"Enter Number Of Rows : ";
    cin>>n;

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
        {
            cout<<"  ";
        }
        for(j=i;j>0;j--)
        {
            cout<<j<<" ";
        }
        for(j=2;j<=i;j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}