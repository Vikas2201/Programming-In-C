/* Given k, find the geometric sum i.e. 
    1 + 1/2 + 1/4 + 1/8 + ... + 1/(2^k)  */

#include<iostream>
#include<cmath>
using namespace std;

float sum(int k)
{
    if(k == 0)
    {
        return 1;
    }
    else
    {
        return 1/pow(2,k) + sum(k-1) ;
    }
}

int main()
{
    int k ;
    cout<<"Enter Value of k : ";
    cin>>k;

    cout<<"Geometric sum : "<<sum(k);
}