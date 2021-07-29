#include<bits/stdc++.h>
using namespace std;

void Prime(int n)
{
    int small[n] = {0};
    for(int i=2;i<=n;i++)
    {
        small[i] = i;
    }

    for(int i=2;i<=n;i++)
    {
        if(small[i] == i)
        {
            for(int j=i*i ; j<=n; j = j +i)
            {
                if(small[j] == j)
                {
                    small[j] = i;
                }
            }
        }
    }

    cout<<"Prime Factor Of "<<n<<" Is : ";
    while(n!=1)
    {
        cout<<small[n]<<" ";
        n = n/small[n];
    }
}

int main()
{
    int n;
    cout<<"Enter Number : ";
    cin>>n;

    Prime(n);
    return 0;
}