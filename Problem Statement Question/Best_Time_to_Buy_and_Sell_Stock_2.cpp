/* You are given an array prices where prices[i] is the price of a given stock on the ith day.

Find the maximum profit you can achieve. You may complete as many transactions as you like 
(i.e., buy one and sell one share of the stock multiple times).

Note: You may not engage in multiple transactions simultaneously (i.e., you must sell the stock before you buy again). */

#include<bits/stdc++.h>
using namespace std;

int maxProfit(vector<int>& prices) 
{
    int n = prices.size();
    if(n == 1)
        return 0;
    int sum = 0;
    for(int i=1;i<n;i++)
    {
        if(prices[i-1] < prices[i])
        {
            sum = sum + (prices[i] - prices[i-1]);
        }
    }
    return sum;
}

int main()
{
    int n ;
    cout<<"How many price u want to enter? \n";
    cin>>n;

    vector<int> prices(n);
    cout<<"Enter Price : ";
    for(int i=0;i<n;i++)
    {
        cin>>prices[i];
    }

    cout<<"Maximum profit we can achieve : "<<maxProfit(prices);
    return 0;
}