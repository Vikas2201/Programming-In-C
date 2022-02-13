#include<bits/stdc++.h>
using namespace std;

int max_area(vector<int> a)
{
    int n = a.size();
    int start = 0 , end = n-1;
    int area = INT_MIN;
    while(start < end)
    {
        int width = end - start + 1;
        area = max(area,width * min(a[start],a[end]));
        if(a[start] < a[end])
        {
            start++;
        }
        else
        {
            end--;
        }
    }
    return area;
}

int main()
{
    int n;
    cout<<"\nENTER SIZE OF ARRAY : ";
    cin>>n;

    vector<int> a(n);
    cout<<"\nENTER VALUES : ";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    cout<<"\nMAXIMUM AMOUNT OF WATER TRAP BETWEEN TWO BARS : "<<max_area(a);
    return 0;
}