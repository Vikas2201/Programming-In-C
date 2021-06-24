#include<iostream>
using namespace std;

int main()
{
    int n , i , j ;
    cout<<"Enter Number Of Row : ";
    cin>>n;

    for(i=0;i<n;i++)
    {
        for(j=1;j<=n-i;j++)
        {
            cout<<"* ";
        }
        for(j=1;j<=2*i;j++)
        {
            cout<<"  ";
        }
        for(j=1;j<=n-i;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    for(i=n;i>=0;i--)
    {
        for(j=1;j<=n-i;j++)
        {
            cout<<"* ";
        }
        for(j=1;j<=2*i;j++)
        {
            cout<<"  ";
        }
        for(j=1;j<=n-i;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}