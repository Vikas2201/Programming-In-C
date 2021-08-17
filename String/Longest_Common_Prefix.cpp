/* Write a function to find the longest common prefix string amongst an array of strings.

If there is no common prefix, return an empty string "". */

#include<bits/stdc++.h>
using namespace std;

string longestCommonPrefix(vector<string>& strs) 
{
    int n = strs.size();
    if(n == 0)
    {
        return "";
    }
    if(n == 1)
    {
        return strs[0];
    }
    sort(strs.begin() , strs.end());
    int min_word_len = min(strs[0].size() , strs[n-1].size());
    
    string first = strs[0];
    string last = strs[n-1];
        
    int i =0;
    while(i < min_word_len && first[i] == last[i])
    {
        i++;
    }
    return first.substr(0,i);
}

int main()
{
    int n ;
    cout<<"How many strings u want to enter : ";
    cin>>n;

    vector<string> str;
    string s;
    cout<<"Enter String : ";
    for(int i=0;i<n;i++)
    {
        cin>>s;
        str.push_back(s);
    }

    s = longestCommonPrefix(str);
    cout<<"Longest Common Prefix : "<<s;
    return 0;
}