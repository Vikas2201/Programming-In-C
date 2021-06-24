#include<iostream>
using namespace std;

int main()
{
    int r , c, i , j ;
    cout<<"Enter Number of rows : ";
    cin>>r;
    cout<<"Enter Number of columns : ";
    cin>>c;

    for(i=1;i<=r;i++)
    {
        for(j=1;j<=c;j++)
        {
            if((i+j) % 4 == 0)
            {
                cout<<"* ";
            }
            else if(i == 2 && j % 4 == 0)
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