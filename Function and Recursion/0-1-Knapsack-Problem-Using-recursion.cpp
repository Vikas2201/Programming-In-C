#include<bits/stdc++.h>
using namespace std;

int knapsack(int *value , int*weigth, int Wt , int n)
{
    if(n == 0 || Wt == 0)
    {
        return 0;
    }
    if(weigth[n-1] > Wt )
    {
        return knapsack(value,weigth,Wt,n-1);
    }
    return max(knapsack(value,weigth,Wt-weigth[n-1],n-1)+value[n-1] , knapsack(value,weigth,Wt,n-1));
}

int main()
{
    int n;
    cout<<"Number Of Items : ";
    cin>>n;

    int value[n] , weigth[n];
    cout<<"Enter Values Of Items : ";
    for(int i=0;i<n;i++)
    {
        cin>>value[i];
    }

    cout<<"Enter Weigths Of Items : ";
    for(int i=0;i<n;i++)
    {
        cin>>weigth[i];
    }

    int Wt;
    cout<<"Enter Bag Weigth : ";
    cin>>Wt;

    cout<<"Maximum Total Values of knapsack : "<<knapsack(value,weigth,Wt,n);
    return 0;
}