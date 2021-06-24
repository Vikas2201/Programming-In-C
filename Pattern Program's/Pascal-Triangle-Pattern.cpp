#include<iostream>
using namespace std;

int main()
{
    int n , i ,j ,count = 1;
    cout<<"Enter Number Of Rows : ";
    cin>>n;

    for(i=0;i<n;i++)
    {
        for(j=1;j<n-i;j++)
        {
            cout<<"  ";
        }
        for(j=0;j<=i;j++)
        {
            if(j==0 || i ==0)
            {
                count = 1;
            }
            else
            {
                count = (count * (i-j+1)) / j;
            }
            cout<<count<<"  ";
        }
        cout<<endl;
    } 
}