/* You are given an n x n 2D matrix representing an image, rotate the image by 90 degrees (clockwise).

You have to rotate the image in-place, which means you have to modify the input 2D matrix directly.
 DO NOT allocate another 2D matrix and do the rotation. */

 #include<bits/stdc++.h>
 using namespace std;

void rotate(vector<vector<int>>& matrix) 
{
    int n = matrix.size();
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            swap(matrix[i][j],matrix[j][i]);
        }
    }
    int first = 0 , last = n-1;
    while(first<last)
    {
        for(int i=0;i<n;i++)
        {
            swap(matrix[i][first],matrix[i][last]);
        }
        first++;
        last--;
    }
}

 int main()
{
    int n ;
    cout<<"Enter size of matrix : ";
    cin>>n;
    vector<vector<int>> matrix(n,vector<int> (n));

    cout<<"Enter Elements in matrix : ";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>matrix[i][j];
        }
    }
    rotate(matrix);
    cout<<"Image Of Matrix : \n";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}