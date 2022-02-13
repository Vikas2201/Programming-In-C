#include<bits/stdc++.h>
using namespace std;

vector<int> stock_span(vector<int> record)
{
    vector<int> ans;
    stack<pair<int,int>> st;

    for(auto price : record)
    {
        int day = 1;
        while(!st.empty() && st.top().first <= price)
        {
            day = day + st.top().second;
            st.pop();
        }
        st.push({price,day});
        ans.push_back(day);
    }
    return ans;
}

int main()
{
    int n ;
    cout<<"ENTER NUMBERS OF RECORDS : ";
    cin>>n;

    cout<<"\nENTER RECORDS : ";
    vector<int> record(n);
    for(int i=0;i<n;i++)
    {
        cin>>record[i];
    }

    vector<int> ans ;
    ans = stock_span(record);
    for(auto i : ans)
    {
        cout<<i<<" ";
    }

    return 0;
}