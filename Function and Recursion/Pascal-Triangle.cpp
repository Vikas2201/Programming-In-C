#include<iostream>
using namespace std;

int fact(int a)
{
    int prod = 1;
    for(int i = 2 ; i <= a ; i++)
    {
        prod = prod * i ;
    }
    return prod ;
}

float calculate(int n , int r)
{
    return (fact(n)/(fact(n-r) * fact(r))) ;
}

int main()
{
    int n , i , j ;
    cout<<"Enter Number of Row : ";
    cin>>n;

    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i;j++)
        {
            cout<<"  ";
        }
        for(j=0 ; j<=i ; j++)
        {
           cout<<calculate(i,j)<<"  "; 
        }
        cout<<endl;
    }
    return 0 ;
}