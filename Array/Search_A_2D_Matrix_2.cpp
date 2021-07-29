/* Write an efficient algorithm that searches for a target value in an m x n integer matrix. 
The matrix has the following properties:

Integers in each row are sorted in ascending from left to right.
Integers in each column are sorted in ascending from top to bottom. */

#include<bits/stdc++.h>
using namespace std;

bool searchMatrix(vector<vector<int>>& matrix, int target) 
{
    int m = matrix.size();
    int n = matrix[0].size();
    int i = 0 , j= n-1;
    while(i<m && j >=0)
    {
        if(matrix[i][j] == target)
            return true;
        else if(matrix[i][j] > target)
            j--;
        else
            i++;
    }
    return false;
}

int main()
{
    int n , m;
    cout<<"Enter row and column : ";
    cin>>m>>n;

    vector<vector<int>> matrix(n , vector<int> (n));
    cout<<"Enter element in matrix : ";
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>matrix[i][j];
        }
    }

    int target;
    cout<<"Enter Searching Element : ";
    cin>>target;

    if(searchMatrix(matrix,target))
    {
        cout<<"Element present in matrix";
    }
    else{
        cout<<"Element Does not present";
    }
    return 0;
}
