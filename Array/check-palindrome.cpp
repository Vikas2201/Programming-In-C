#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter length of String : ";
    cin>>n;

    char a[n+1];
    cout<<"Enter String : ";
    cin>>a; 

    int beg = 0  , end = n-1;
    while(beg <= end)
    {
        if(a[beg] == a[end])
        {
            beg++;
            end--;
        }
        else
        {
            cout<<"String is not palindrome";
            return 0;
        }
    } 
    cout<<"String is palindrome";
    return 0;  
}