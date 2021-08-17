/*The string "PAYPALISHIRING" is written in a zigzag pattern on a given number of rows like this: (you may want to display this pattern in a fixed font for better legibility)

P   A   H   N
A P L S I I G
Y   I   R
And then read line by line: "PAHNAPLSIIGYIR" */

#include<bits/stdc++.h>
using namespace std;

string convert(string s, int numRows) 
{
    if ( s.size() == 1 || numRows == 1 ) 
        return s;

	string rows[numRows] ;
	int num = 0;
	string ans = "";
	bool plus = false;

	for ( int i = 0 ; i < s.size() ; i++ )
	{

		if ( num == ( numRows - 1 ) ) 
		{
			plus = false;

		}
		else if ( num == 0 )
		{
			plus = true;

		}

		rows[num] += s[i];

		if ( plus ) 
            num++;
		else 
            num--;        

	}
	for ( int i = 0 ; i < numRows ; i++ )
		ans += rows[i];

	return ans;
}

int main()
{
    string s;
    cout<<"Enter String : ";
    getline(cin,s);

    int row;
    cout<<"Enter Number of rows : ";
    cin>>row;

    string ans = convert(s,row);

    cout<<"Zig Zag Conversion of string : ";
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i];
    }   
    return 0;
}