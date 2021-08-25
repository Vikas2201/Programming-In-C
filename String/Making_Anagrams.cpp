/* Given two strings, a and ,b that may or may not be of the same length, 
determine the minimum number of character deletions required to make a and b anagrams.
Any characters can be deleted from either of the strings. */

#include<bits/stdc++.h>
using namespace std;

int makeAnagram(string a, string b) 
{
    int count = 0;
    vector<int> freq(26, 0);
    for (auto c : a) 
    { 
        ++freq[c - 'a']; 
    }
    for(auto c : b) 
    {
        --freq[c - 'a']; 
    }
    for(auto val : freq) 
    { 
        count += abs(val); 
    }
    return count;
}

int main()
{
    string a , b;
    cout<<"ENTER FIRST STRING : ";
    getline(cin,a);


    cout<<"ENTER SECOND STRING : ";
    getline(cin,b);

    cout<<"MINIMUM NUMBER OF CHARACTERS DELETIONS REQUIRED TO MAKE BOTH STRING ANAGRAMS : "<<makeAnagram(a,b);
    return 0;
}