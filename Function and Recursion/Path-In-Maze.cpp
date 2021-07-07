/* Count Number of Possible Path In Maze */

#include<bits/stdc++.h>
using namespace std;

int count_path_maze(int n , int i , int j)
{
    if(i == n-1 && j == n-1)
    {
        return 1;
    }
    if(i >=n || j >= n)
    {
        return 0;
    }
    return count_path_maze(n,i+1,j) + count_path_maze(n,i,j+1);
}

int main()
{
    int n;
    cout<<"Enter Dimension Of Maze : ";
    cin>>n;

    cout<<"Total Number Of Possible Path In Maze : "<<count_path_maze(n,0,0);
    return 0;
}
