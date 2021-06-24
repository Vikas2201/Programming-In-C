#include<iostream>
using namespace std;

int main()
{
    int n , i ,j , count = 0;

    cout<<"Enter Number of rows : ";
    cin>>n;
    int c =3;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
        {
            cout<<"  ";
        }
        for(j=1;j<=i;j++)
        {
            cout<<i+j-1<<" ";
        }
        for(j=i-1;j>0;j--)
        {
            cout<<i+j-1<<" ";
        }
        cout<<endl;
    }
    return 0;
}