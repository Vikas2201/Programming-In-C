/* Given two binary strings a and b, return their sum as a binary string. */

#include<bits/stdc++.h>
using namespace std;

string addBinary(string a, string b) 
{
    int i =a.size()-1,j=b.size()-1;
    int carry = 0;
    string ans = "";
    while(i>=0 && j>=0)
    {
        if(a[i] == '1' && b[j] == '1')
        {
            if(carry == 0)
            {
                ans = ans + '0';
                carry = 1;
            }
            else
            {
                ans = ans + '1';
                carry = 1;
            }
        }
        else if(a[i] == '0' && b[j] == '0')
        {
            if(carry == 1)
            {
                ans = ans + '1';
                carry = 0;
            }
            else
            {
                ans = ans + '0';
                carry = 0;
            }
        }
        else
        {
            if(carry == 1)
            {
                ans = ans + '0';
                carry = 1;
            }
            else
            {
                ans = ans + '1';
                carry = 0;
            }
        }
        i--;
        j--;
    }
    while(i>=0)
    {
        if(a[i] == '1')
        {
            if(carry == 1)
            {
                ans = ans + '0';
                carry = 1;
            }
            else
            {
                ans = ans + '1';
                carry = 0;
            }
        }
        else
        {
            if(carry == 1)
            {
                ans = ans + '1';
                carry = 0;
            }
            else
            {
                ans = ans + '0';
                carry = 0;
            }
        }
        i--;
    }
    while(j>=0)
    {
        if(b[j] == '1')
        {
            if(carry == 1)
            {
                ans = ans + '0';
                carry = 1;
            }
            else
            {
                ans = ans + '1';
                carry = 0;
            }
        }
        else
        {
            if(carry == 1)
            {
                ans = ans + '1';
                carry = 0;
            }
            else
            {
                ans = ans + '0';
                carry = 0;
            }
        }
        j--;
    }
    if(carry == 1 && i <0 && j <0)
    {
        ans = ans + '1';
    }
    reverse(ans.begin(),ans.end());
    return ans;
}

int main()
{
    string a , b;
    cout<<"ENTER FIRST BINARY STRING : ";
    getline(cin,a);

    cout<<"ENTER SECOND BINARY STRING : ";
    getline(cin,b);

    string ans ;
    ans = addBinary(a,b);

    cout<<"ADDITION OF TWO BINARY STRING : "<<ans;
    return 0;
}