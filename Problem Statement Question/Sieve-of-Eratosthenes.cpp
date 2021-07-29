#include<bits/stdc++.h>
using namespace std;

void primesieve(int n)
{
    int prime[n] = {0};

    for(int i=2 ; i<n;i++)
    {
        if(prime[i] == 0)
        {
            for(int j = i*i ; j < n;j = j + i)
            {
                prime[j] = 1;
            }
        }
    }

    cout<<"Prime Number Between 0 to "<<n<<" : ";
    for(int i=2 ; i<n;i++)
    {
        if(prime[i] == 0)
        {
            cout<<i<<" ";
        }
    }
    cout<<endl;
}

int main()
{
    int n;
    cout<<"How many Number U Want To Enter ?\n";
    cin>>n;

    primesieve(n);
    return 0;
}