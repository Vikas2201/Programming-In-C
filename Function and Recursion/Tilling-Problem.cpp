/* Given a n*m board and tiles of size n*1 . then count the total number of ways to the tile the given board using these tiles */

#include<bits/stdc++.h>
using namespace std;

int tilling(int n , int m)
{
    if(m == 0)
    {
        return 0;
    }
    if(m == 1)
    {
        return 1;
    }
    return tilling(n,m-1) + tilling(n,m-2);
}

int main()
{
    int n , m;
    cout<<"Enter Dimension Of Tile : ";
    cin>>n>>m;

    cout<<"Number Of Ways to tile the tiles in Given Board : "<<tilling(n,m);
    return 0;
}