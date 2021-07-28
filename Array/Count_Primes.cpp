/* Count the number of prime numbers less than a non-negative number, n. */

#include<bits/stdc++.h>
using namespace std;

int countPrimes(int n) 
{
    if(n <3)
    {
        return 0;
    }
    int prime[n];
    for(int i=0;i<n;i++)
    {
        prime[i] = 0;
    }

    for(int i=2 ; i<n;i++)
    {
        if(prime[i] == 0)
        {
            for(long long j = 2*i ; j < n;j = j + i)
            {
                prime[j] = 1;
            }
        }
    }
        
    int count =0;
    for(int i=2 ; i<n;i++)
    {
        if(prime[i] == 0)
        {
            count++;
        }
    }
    return count;
}

int main()
{
    int n;
    cout<<"Enter Number : ";
    cin>>n;

    cout<<"Total Number Of Prime Number Less Than "<<n<<" : "<<countPrimes(n);
    return 0;
}