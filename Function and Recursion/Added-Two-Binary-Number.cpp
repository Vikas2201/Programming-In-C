#include<iostream>
using namespace std;

int reverse(int n)
{
    int  r, result = 0;
    while(n>0)
    {
        r = n % 10;
        result = result*10 + r ;
        n = n / 10;
    }
    return result;
}

int addbinary(int a, int b)
{
    int carry = 0, ans = 0 ;

    while(a>0 && b > 0)
    {
        if(a%2 == 0 && b%2 == 0)
        {
            if(carry == 1)
            {
                ans = ans*10 + 1;
                carry = 0;
            }
            else
            {
                ans = ans*10 + 0 ;
                carry = 0;
            }
        }
        else if((a%2 == 1 && b%2 == 0)||(a%2 == 0 && b%2 == 1))
        {
            if(carry == 1)
            {
                ans = ans*10 + 0;
                carry = 1;
            }
            else
            {
                ans = ans*10 + 1 ;
                carry = 0;
            }
        }
        else
        {
            if(carry == 1)
            {
                ans = ans*10 +1 ;
                carry = 1;
            }
            else
            {
                ans = ans*10 + 0;
                carry = 1; 
            }
        }
        a = a / 10;
        b = b / 10;
    }
    while(a>0)
    {
        if(a%2 == 0)
        {
            if(carry == 1)
            {
                ans = ans*10 + 1;
                carry = 0;
            }
            else
            {
                ans = ans*10 + 0;
                carry = 0;
            }
        }
        else
        {
            if(carry == 1)
            {
                ans = ans *10 + 0;
                carry = 1;
            }
            else
            {
                ans = ans*10 + 1;
                carry = 0;
            }
        }
        a = a/10 ;
    }
    while(b>0)
    {
        if(b%2 == 0)
        {
            if(carry == 1)
            {
                ans = ans*10 + 1;
                carry = 0;
            }
            else
            {
                ans = ans*10 + 0;
                carry = 0;
            }
        }
        else
        {
            if(carry == 1)
            {
                ans = ans *10 + 0;
                carry = 1;
            }
            else
            {
                ans = ans*10 + 1;
                carry = 0;
            }
        }
        b = b/10 ;
    }
    if(carry == 1)
    {
        ans = ans*10 + 1;
    }
    ans = reverse(ans);
    return ans ;
}

int main()
{
    int a , b;
    cout<<"Enter First Number : ";
    cin>>a;
    cout<<"Enter Second Number : ";
    cin>>b;

    cout<<"Sum of "<<a<<" and "<<b<<" : "<<addbinary(a,b);
    return 0;
}