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

float Calculate(int n , int r)
{
    return (fact(n)/(fact(n-r) * fact(r))) ;
}

int main()
{
    int n , r ;
    cout<<"Enter Value Of n : ";
    cin>>n;

    cout<<"Enter Value Of r : ";
    cin>>r; 

    cout<<"Value of "<<n<<"C"<<r<<" : "<<Calculate(n,r);
    return 0;
}