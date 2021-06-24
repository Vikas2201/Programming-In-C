#include<iostream>
using namespace std;

int main()
{
    int n ,i , j;
    cout<<"Enter Number Of Rows : ";
    cin>>n;

    for(i=1;i<=n;i++)
    {
        for(j=1;j<n-i+1;j++)
        {
            cout<<"  ";
        }
        for(j=1;j<=(2*i-1);j++)
        {
            if(i==n || j == 1 || j ==(2*i-1))
            {
                cout<<"* ";
            }
            else
            {
                cout<<"  ";
            }
        }
        cout<<endl;
    }
    return 0;
}