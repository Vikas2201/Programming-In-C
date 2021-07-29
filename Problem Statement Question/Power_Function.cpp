/* Implement pow(x, n), which calculates x raised to the power n (i.e., xn). */

#include<bits/stdc++.h>
using namespace std;

double myPow(double x, int n) 
{
    if (n == 0) 
        return 1;
    if(n==-1)
        return 1/x;
    if (n%2) 
        return x*myPow(x,n-1);
    else 
        return myPow(x*x, n/2);
}

int main()
{
    double x;
    cout<<"Enter Base : ";
    cin>>x;

    int n;
    cout<<"Enter Power : ";
    cin>>n;

    cout<<"Pow("<<x<<","<<n<<") : "<<myPow(x,n);
    return 0;
}