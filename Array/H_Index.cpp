/* Given an array of integers citations where citations[i] is the number of citations a researcher received for their ith paper,
return compute the researcher's h-index.

According to the definition of h-index on Wikipedia: A scientist has an index h if h of their n papers have at least h citations
each, and the other n − h papers have no more than h citations each.

If there are several possible values for h, the maximum one is taken as the h-index. */

#include<bits/stdc++.h>
using namespace std;

int hIndex(vector<int>& citations) 
{
    sort(citations.begin(),citations.end());
    int cnt = 0;
    for(int i = citations.size() - 1; i>=0; i--)
    {
        if(cnt < citations[i])
            cnt++;
    }
    return cnt;    
}

int main()
{
    int n ;
    cout<<"How many research paper u will enter ? ";
    cin>>n;

    vector<int> citations(n);
    cout<<"Enter  number of citations : ";
    for(int i=0;i<n;i++)
    {
        cin>>citations[i];
    }

    cout<<"Value of researcher h-index : "<<hIndex(citations);
    return 0;
}