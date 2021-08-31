/* The DNA sequence is composed of a series of nucleotides abbreviated as 'A', 'C', 'G', and 'T'.

For example, "ACGAATTCCG" is a DNA sequence.
When studying DNA, it is useful to identify repeated sequences within the DNA.

Given a string s that represents a DNA sequence, return all the 10-letter-long sequences (substrings) 
that occur more than once in a DNA molecule. You may return the answer in any order. */

#include<bits/stdc++.h>
using namespace std;

vector<string> findRepeatedDnaSequences(string s) 
{
    int n = s.size();
    if(n<10)
    {
        return {};
    }
    unordered_map<string,int>mp;
    vector<string>sol;
    for(int i=0;i<n-9;i++)
    {
        mp[s.substr(i,10)]++;
    }
    for(auto itr=mp.begin();itr!=mp.end();itr++)
    {
        if(itr->second>1)
        {
            sol.push_back(itr->first);
        }
    }
    return sol;
}

int main()
{
    string s;
    cout<<"\nENTER DNA SEQUENCES : ";
    getline(cin,s);

    vector<string> str;
    str = findRepeatedDnaSequences(s);
    cout<<"\nDNA MOLECULE SEQUENCES : ";
    for(auto &i : str)
    {
        cout<<i<<" ";
    }
    return 0;
}