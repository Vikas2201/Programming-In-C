#include<iostream>
using namespace std;

int main()
{
    int n , i , j ;
    cout<<"Enter Number of rows : ";
    cin>>n;

    for(i=n;i>0;i--)
    {
        for(j=1;j<=n-i;j++)
        {
            cout<<"  ";
        }
        for(j=i;j<=2*i-1;j++)
        {
            cout<<"* ";
        }
        for(j=1;j<=i-1;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}