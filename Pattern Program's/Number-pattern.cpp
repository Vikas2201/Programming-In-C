#include<iostream>
using namespace std;

int main()
{
    int n , i , j ;
    cout<<"Enter numnber of rows : ";
    cin>>n;

    for(i=n;i>0;i--)
    {
        for(j=0;j<i;j++)
        {
            cout<<" ";
        }
        for(j=1;j<=n-i+1;j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}