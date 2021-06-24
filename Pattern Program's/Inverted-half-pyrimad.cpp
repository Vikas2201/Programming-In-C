#include<iostream>
using namespace std;

int main()
{
    int n,i,j;
    cout<<"Enter No. of Rows : ";
    cin>>n;
    for(i=n-1;i>=0;i--)
    {
        for(j=0;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}