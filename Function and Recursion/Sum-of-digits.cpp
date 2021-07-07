/* Write a recursive function that returns the sum of the digits of a given integer. */

#include<iostream>
using namespace std;

int sum(int n)
{
    if(n == 0)
    {
        return n%10 ;
    }
    else
    {
        return n%10 + sum(n/10);
    }
}

int main()
{
    int n;
    cout<<"Enter A Number : ";
    cin>>n;

    cout<<"Sum of digits of "<<n<<" ; "<<sum(n);
    return 0;
}