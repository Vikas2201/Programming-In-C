/* Given an array of intervals where intervals[i] = [starti, endi],
 merge all overlapping intervals, and return an array of the non-overlapping intervals that cover all the intervals in the input. */

#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> result;
        int i;
        for(i=0;i<intervals.size()-1;)
        {
            if(intervals[i][0] == 0 && intervals[i][1] == 0)
            {
                result.push_back({0,0});
                i = i+1;
            }
            else if(intervals[i][0] >= intervals[i+1][0])
            {
                if(intervals[i][1] >= intervals[i+1][1])
                {
                    result.push_back({intervals[i+1][0],intervals[i][1]});
                }
                else
                {
                    result.push_back({intervals[i+1][0],intervals[i+1][1]});
                }
                i = i+2;
            }
            else if(intervals[i][1] >= intervals[i+1][0])
            {
                if(intervals[i][1] >= intervals[i+1][1])
                {
                    result.push_back({intervals[i][0],intervals[i][1]});
                }
                else
                    result.push_back({intervals[i][0],intervals[i+1][1]});
                i = i+2;
            }
            else
            {
                result.push_back({intervals[i][0],intervals[i][1]});
                i= i+1; 
            }
        }
        if(i == intervals.size()-1)
        {
            result.push_back({intervals[i][0],intervals[i][1]});
        }
        return result;
}
int main()
{
    int n;
    cout<<"Enter No. Of Intervals : ";
    cin>>n;
    vector<vector<int>> intervals(n,vector<int>(2));
    cout<<"Enter Intervals : ";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<2;j++)
        {
            cin>>intervals[i][j];
        }
    }
    vector<vector<int>> result = merge(intervals);
    cout<<"Intervals after merging : \n";
    for(int i = 0;i<result.size();i++)
    {
        cout<<"[ ";
        for(int j=0;j<2;j++)
           cout<<result[i][j]<<" ";
        cout<<"]"<<endl;   
    }
    return 0;    
}