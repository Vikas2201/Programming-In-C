/* Implement the myAtoi(string s) function, which converts a string to a 32-bit signed integer (similar to C/C++'s atoi function).

The algorithm for myAtoi(string s) is as follows:

 1) Read in and ignore any leading whitespace.
 2) Check if the next character (if not already at the end of the string) is '-' or '+'. Read this character in if it is either. This determines if the final result is negative or positive respectively. Assume the result is positive if neither is present.
 3) Read in next the characters until the next non-digit charcter or the end of the input is reached. The rest of the string is ignored.
 4) Convert these digits into an integer (i.e. "123" -> 123, "0032" -> 32). If no digits were read, then the integer is 0. Change the sign as necessary (from step 2).
 5) If the integer is out of the 32-bit signed integer range [-2^31, 2^31 - 1], then clamp the integer so that it remains in the range. Specifically, integers less than -231 should be clamped to -231, and integers greater than 231 - 1 should be clamped to 231 - 1.
    Return the integer as the final result. */

#include<bits/stdc++.h>
using namespace std;

int myAtoi(string s) 
{
    int len = s.size();
    bool isNeg = false;

    int i =0;
    while( (i < len) && (s[i] == ' ') ) 
    {
        i++;
    }

    if(i >= len) 
    {
        return 0;
    }

    if(s[i] == '-') 
    {
        isNeg = true;
        i++;
    }
        
    else if(s[i] == '+') 
    {
        i++;
    }

    int result = 0;
    for( ; i<len; i++) 
    {
        int digit = s[i] - '0';
        if(digit < 0 || digit > 9 ) 
        {
            result = isNeg? result*(-1) : result;
            return result;
        }
        if(result> (INT_MAX-digit)/10 ) 
        {
            result = isNeg? INT_MIN : INT_MAX;
            return result;
        }
        result = result*10 + digit;
    }
    result = isNeg? result*(-1) : result;
    return result;
}

int main()
{
    string str;
    cout<<"Enter String : ";
    getline(cin,str);

    int num = myAtoi(str);
    cout<<"Number In String : "<<num;

    return 0;
}
