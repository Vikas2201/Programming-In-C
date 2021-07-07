/* Print All SubString Of A String Using Recursion */

#include<bits/stdc++.h>
using namespace std;

void substring(string str , string result)
{
    if(str.length() == 0)
    {
        cout<<result<<endl;;
        return ;
    }
    char ch = str[0];
    string rest_string = str.substr(1);
    substring(rest_string,result);
    substring(rest_string,result+ch);
}

int main()
{
    string str;
    cout<<"Enter String : ";
    getline(cin,str);

    cout<<"SubString : ";
    substring(str,"");
    return 0;
}