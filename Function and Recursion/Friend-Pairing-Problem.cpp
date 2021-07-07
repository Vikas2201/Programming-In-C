/* Find The Number Of Ways In Which "N" Friends Can Remain Single Or Can Be Paired Up */

#include<bits/stdc++.h>
using namespace std;

int friend_pairing(int n)
{
    if(n == 0 || n == 1 || n == 2)
    {
        return n;
    }
    return friend_pairing(n-1) + (friend_pairing(n-2) * (n-1));
}

int main()
{
    int n ;
    cout<<"Enter Number Of Friends : ";
    cin>>n;

    cout<<"Total Number Of Ways : "<<friend_pairing(n);
    return 0;
}