/* Given an integer N, count and return the number of zeros that are present in the given integer using recursion.*/

#include<iostream>
using namespace std;

int count(int q, int r)
{
    if(q == 0)
    {
        return 0 ;
    }
    else if(r == 0)
    {
        return 1 + count( q/10 , q%10) ;
    }
    else
    {
        return count(q/10 , q%10) ;
    }
}

int main()
{
    int n ;
    cout<<"Enter a number : ";
    cin>>n;

    cout<<"Number of zeros in "<<n<<" : "<<count(n/10,n%10);
    return 0;
}