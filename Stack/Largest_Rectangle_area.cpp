#include<bits/stdc++.h>
using namespace std;

int max_area(vector<int> a)
{
    int n = a.size();
    int i = 0,area = 0;
    stack<int> st;
    a.push_back(0);
    while(i <= n)
    {
        while(!st.empty() && a[st.top()] > a[i])
        {
            int h = a[st.top()];
            st.pop();
            if(st.empty())
            {
                area = max(area,h*i);
            }
            else
            {
                area = max(area ,(i-st.top()-1)*h);
            }
        }
        st.push(i);
        i++;
    }
    return area;
}

int main()
{
    int n;
    cout<<"\nENTER SIZE OF ARRAY : ";
    cin>>n;

    vector<int> a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    cout<<"\nMAXIMUM AREA OF RECTANGLE FORMED : "<<max_area(a);
    return 0;
}