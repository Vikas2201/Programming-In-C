/* Starting with a 1-indexed array of zeros and a list of operations, 
for each operation add a value to each the array element between two given indices, inclusive. 
Once all operations have been performed, return the maximum value in the array. */

#include<bits/stdc++.h>
using namespace std;

int arrayManipulation(int n , vector<vector<int>> queries)
{
    vector<int> array(n+1,0);
    for(auto query : queries)
    {
        int a = query[0]-1;
        int b=query[1];
        int k = query[2];
        array[a]+=k;
        array[b]-=k;
    }
    int max_value = INT_MIN;
    int running_count =0;
    for(auto i : array)
    {
        running_count +=i;
        if(running_count > max_value)
        {
            max_value = running_count;
        }
    }
    return max_value;
}

int main()
{
    int row;
    cout<<"Enter number of rows : ";
    cin>>row;

    vector<vector<int>> queries(row,vector<int>(3));
    cout<<"Enter Queries : ";
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>queries[i][j];
        }
    }

    int n;
    cout<<"Enter Number of operation : ";
    cin>>n;

    cout<<"Maximum Value : "<<arrayManipulation(n,queries);
    return 0;
}