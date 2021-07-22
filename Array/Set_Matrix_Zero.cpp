/* Given an m x n integer matrix matrix, if an element is 0, set its entire row and column to 0's, and return the matrix. */
#include<bits/stdc++.h>
using namespace std;

void setZeroes(vector<vector<int>>& matrix) 
{
    int m = matrix.size();
    int n = matrix[0].size();
    int i =0 , j = 0;
    vector<vector<int>> place_zero ;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(matrix[i][j] == 0)
            {
                place_zero.push_back({i,j});
            }
        }
    }
    for(int i = 0 ; i<place_zero.size() ; i++)
    {
        for(int k=0;k<n;k++)
        {
            matrix[place_zero[i][0]][k] = 0;
        }
            
        for(int k =0;k<m;k++)
        {
            matrix[k][place_zero[i][1]] = 0;
        }
    }
}

int main()
{
    int row , column;
    cout<<"Enter Row and column : ";
    cin>>row>>column;
    vector<vector<int>> matrix(row , vector<int>(column));
    cout<<"Enter Elements in Matrix : \n";
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
            cin>>matrix[i][j];
        }
    }
    setZeroes(matrix);
    cout<<"After Set Zeros Matrix Will be : \n";
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}