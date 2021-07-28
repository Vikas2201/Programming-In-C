/* Given an array of integers numbers that is already sorted in non-decreasing order, 
find two numbers such that they add up to a specific target number.

Return the indices of the two numbers (1-indexed) as an integer array answer of size 2, 
where 1 <= answer[0] < answer[1] <= numbers.length. */

#include<bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int>& numbers, int target) 
{
    int n = numbers.size();
    if(n<2)
         return {0,0};
    int start = 0 , end = n-1;
    while(start < end)
    {
        int sum = numbers[start] + numbers[end];
        if(sum == target)
        {
            return {start+1,end+1};
        }
        if(sum > target)
        {
            end--;
        }
        if(sum<target)
        {
            start++;
        }
    }
    return {0,0};
}

int main()
{
    int n;
    cout<<"Enter Length of array : ";
    cin>>n;

    vector<int> numbers(n);
    cout<<"Enter Element in array : ";
    for(int i=0;i<n;i++)
    {
        cin>>numbers[i];
    }

    int target;
    cout<<"Enter sum of two number : ";
    cin>>target;
    
    vector<int> answer;
    answer = twoSum(numbers,target);
    cout<<"Indices of two numbers whose sum is "<<target<<" : "<<answer[0]<<","<<answer[1];
    return 0;
}