/* Given a string columnTitle that represents the column title as appear in an Excel sheet, return its corresponding column number.

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

int titleToNumber(string columnTitle) 
{
    int n = 0;
    long p = 1;
    for(int i=columnTitle.size()-1; i>=0; i--)
    {
        int x = (int)columnTitle[i] - 64;
        n += x*p;
        p *= 26;
    }
    return n;
}

int main()
{
    string str;
    cout<<"\nENTER COLUMN TITLE : ";
    getline(cin,str);

    cout<<"\nCOLUMN NUMBER IN EXCEL SHEET : "<<titleToNumber(str);
    return 0;
}