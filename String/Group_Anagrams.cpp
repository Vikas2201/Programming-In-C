/* Given an array of strings strs, group the anagrams together. You can return the answer in any order.

An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, 
typically using all the original letters exactly once. */

#include<bits/stdc++.h>
using namespace std;

vector<vector<string>> groupAnagrams(vector<string>& strs) 
{
    unordered_map<string, vector<string>> mp;
        
    for(int i = 0; i < strs.size(); i++)
    {
        string tmp = strs[i];
        sort(tmp.begin(), tmp.end());
        mp[tmp].push_back(strs[i]);
    }
        
    vector<vector<string>> ans;
        
    for(auto it = mp.begin(); it != mp.end(); it++)
        ans.push_back(it->second);
    return ans;
}

int main()
{
    string s;
    vector<string> strs;
    int n;
    cout<<"HOW MANY WORD U WANT TO ENTER : ";
    cin>>n;

    cout<<"ENTER STRINGS : ";
    for(int i=0;i<n;i++)
    {
        getline(cin,s);
        strs.push_back(s);
    }

    cout<<"GROUP OF ANAGRAM STRING TOGETHER : ";
    vector<vector<string>> ans ;
    ans = groupAnagrams(strs);
    for(int i = 0;i<ans.size();i++)
    {
        for(auto j : ans[i])
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}