#include<iostream>
using namespace std;

int main()
{
    int r , c ,i,j;
    cout<<"Enter no. of rows : ";
    cin>>r;
    cout<<"Enter no. of columns : ";
    cin>>c;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;

}