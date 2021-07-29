/* Given a triangle array, return the minimum path sum from top to bottom.

For each step, you may move to an adjacent number of the row below. More formally, 
if you are on index i on the current row, you may move to either index i or index i + 1 on the next row.*/

#include<bits/stdc++.h>
using namespace std;

int minimumTotal(vector<vector<int>>& triangle) 
{
    for (int i = triangle.size() - 2; i >= 0; i--)
    {
        for (int j = 0; j < triangle[i].size(); j++)
        {
            triangle[i][j] = triangle[i][j] + min(triangle[i+1][j],triangle[i+1][j+1]);
        }
    }
    return triangle[0][0];
}

int main()
{
    int n ;
    cout<<"Enter Size of triangle : ";
    cin>>n;

    vector<vector<int>> triangle(n);
    for(int i=0;i<n;i++)
    {
        cout<<"Enter "<<i+1<<" row of triangle : ";
        for(int j=0;j<=i;j++)
        {
            cin>>triangle[i][j];
        }
    }

    cout<<"Minimum path sum from top to bottom of a triangle : "<<minimumTotal(triangle);
    return 0;
}