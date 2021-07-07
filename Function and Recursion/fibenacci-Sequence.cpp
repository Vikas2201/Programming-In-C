#include<iostream>
using namespace std;

void fibenacci( int n , int a , int b )
{
    int c ;
    cout<<"Fibenacci sequence : "<<endl;
    cout<<a<<" "<<b<<" ";
    for(int i = 0 ; i < n-2 ; i++)
    {
        c = a + b ;
        cout<<c<<" ";
        a = b;
        b = c;
    }
    return ;
}

int main()
{
    int n , a = 0 , b =1 ;

    cout<<"Enter Number of Terms : ";
    cin>>n;

    fibenacci(n,a,b) ;

    return 0;
}