/* You are given an array prices where prices[i] is the price of a given stock on the ith day.

You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.

Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0. */

#include<bits/stdc++.h>
using namespace std;

int maxProfit(vector<int>& prices) 
{
    int n = prices.size();
    if(n == 1)
    {
        return 0;
    }
    int profit= 0;
    int min_value= INT_MAX;
        
    for(int i=0;i<n;i++)
    {
        min_value = min(min_value,prices[i]);
        profit= max(profit, prices[i]-min_value);
    }
    return profit;
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

    cout<<"Maximum Profit Earn : "<<maxProfit(prices);
    return 0;
}

 