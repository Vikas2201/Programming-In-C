#include<bits/stdc++.h>
using namespace std;

int GCD(int n , int m)
{
    if(n>m)
    {
        int rem = 0;
        while(m!=0)
        {
            rem = n%m ;
            n = m;
            m = rem;
        }
        return n;
    }
    else
    {
        int rem = 0;
        while(n!=0)
        {
            rem = m%n ;
            m = n;
            n = rem;
        }
        return m;   
    }
}

int main()
{
    int n , m;
    cout<<"Enter Two Number For Finding GCD : ";
    cin>>n>>m;

    cout<<"GCD of "<<n<<" and "<<m<<" is : "<<GCD(n,m);
    return 0;
}