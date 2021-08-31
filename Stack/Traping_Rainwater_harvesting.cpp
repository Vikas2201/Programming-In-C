#include<bits/stdc++.h>
using namespace std;

int trap_water(vector<int> a)
{
    int n = a.size();
    int i = 0;
    int ans = 0;
    stack<int> st;
    while(i < n)
    {
        while(!st.empty() && (a[st.top()] < a[i]))
        {
            int cur = st.top();
            st.pop();
            if(st.empty())
            {
                break;
            }
            else
            {
                int height = i - st.top() - 1;
                ans = ans + (min(a[st.top()],a[i]) - a[cur]) * height; 
            }
        }
        st.push(i);
        i++;
    }
    return ans;
}

int main()
{
    vector<int> a = {0,1,0,2,1,0,1,3,2,1,2,1};
    cout<<"\nMAXIMUM AMOUNT OF WATER TRAPS : "<<trap_water(a);
    return 0;
}