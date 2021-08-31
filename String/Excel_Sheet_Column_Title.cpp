/* Given an integer columnNumber, return its corresponding column title as it appears in an Excel sheet.

For example:

A -> 1
B -> 2
C -> 3
...
Z -> 26
AA -> 27
AB -> 28 
... */

#include<bits/stdc++.h>
using namespace std;

string convertToTitle(int columnNumber) 
{
    string ans;
    int colno = columnNumber;
    while(colno>0)
    {
        colno--;
        int d= colno%26;
        colno/=26;
        ans+= 'A'+d; 
    }
   reverse(ans.begin(),ans.end());
   return ans; 
} 

int main()
{
    int number;
    cout<<"\nENTER COLUMN NUMBER : ";
    cin>>number;

    string result;
    result = convertToTitle(number);
    cout<<"\nCOLUMN TITLE APPEARS IN EXCEL SHEET : "<<result;
    return 0;
}