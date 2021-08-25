/* Given two strings word1 and word2, return the minimum number of operations required to convert word1 to word2.

You have the following three operations permitted on a word:

Insert a character
Delete a character
Replace a character */

#include<bits/stdc++.h>
using namespace std;

int minDistance(string s1, string s2) 
{
    int l1=s1.size();
    int l2=s2.size();
    int dp[l1+1][l2+1];
    for(int i=0; i<l1+1; i++)
    {
        // If first string is empty, only option is to 
		// insert all characters of second string 
        dp[i][0]=i;
    }
    for(int i=0; i<l2+1; i++)
    {
        // If second string is empty, only option is to 
		// remove all characters of second string 
        dp[0][i]=i;
    }
    for(int i=1; i<l1+1; i++)
    {
        for(int j=1; j<l2+1; j++)
        {   
            // If last characters are same, ignore last char 
		    // and recur for remaining string 
            if(s1[i-1]==s2[j-1])
                dp[i][j]=dp[i-1][j-1];
                
            // If the last character is different, consider all 
		    // possibilities and find the minimum 
            else
                dp[i][j]=1+min(dp[i-1][j-1],min(dp[i-1][j],dp[i][j-1]));
        }
    }
    return dp[l1][l2];
}

int main()
{
    string s1 , s2;

    cout<<"ENTER FIRST WORD : ";
    getline(cin,s1);

    cout<<"ENTER SECOND WORD : ";
    getline(cin,s2);

    cout<<"MINIMUM NUMBER OF STEPS REQUIRED TO CONVERT WORD1 TO WORD2 : "<<minDistance(s1,s2);
    return 0;
}