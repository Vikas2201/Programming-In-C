#include<iostream>
using namespace std;

int main()
{
    int n , count =1 , i , j;
    cout<<"Enter number of row : ";
    cin>>n;
    for (i = 0 ; i< n ; i++)
    {
        for(j=0;j<=i;j++)
        {
            cout<<count<<" ";
            count++;
        }
        cout<<endl;
    }
    return 0;
}