/* Given a string s, find the length of the longest substring without repeating characters. */

#include<bits/stdc++.h>
using namespace std;

int lengthOfLongestSubstring(string s) 
{
    int n = s.size();
    map<char , int >count;
    int maxlength = 0;
    int start = 0;
 
    for(int end = 0; end < s.length(); end++)
    {
        if (count.find(s[end]) != count.end())
        {
            start = max(start, count[s[end]] + 1);
        }
        count[s[end]] = end;
        maxlength = max(maxlength,end - start + 1);
    }
    return maxlength;
}

int main()
{
    string str;
    cout<<"Enter String : ";
    getline(cin,str);

    int len = lengthOfLongestSubstring(str);

    cout<<"The length of the longest non-repeating character substring is : "<<len;
    return 0;
}