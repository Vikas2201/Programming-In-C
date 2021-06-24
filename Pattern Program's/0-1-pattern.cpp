#include<iostream>
using namespace std;

int main()
{
    int n , i ,j ;
    cout<<"Enter number of rows : ";
    cin>>n;

    for(i=0;i<n;i++)
    {
        for(j=0;j<=i;j++)
        {
            if((i+j) % 2 == 0)
            {
                cout<<"1"<<" ";
            }
            else
            {
                cout<<"0"<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}