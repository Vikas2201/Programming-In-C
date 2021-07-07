#include<iostream>
using namespace std;

int main()
{
    int n , r , q , number = 0;
    cout<<"Enter a number : ";
    cin>>n;
    
    q = n;
    while (q>0)
    {
        r = q % 10 ;
        number = number * 10 + r;
        q = q / 10 ;
    }
    cout<<"Reverse Number : "<<number;
    return 0;
}