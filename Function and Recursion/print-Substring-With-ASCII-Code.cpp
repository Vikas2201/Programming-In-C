#include<bits/stdc++.h>
using namespace std;

void substring_ascii(string str , string result)
{
    if(str.length() == 0)
    {
        cout<<result<<endl;
        return;
    }
    char ch = str[0];
    string rest_str = str.substr(1);
    substring_ascii(rest_str,result);
    substring_ascii(rest_str,result+ch);
    substring_ascii(rest_str,result+to_string((int)ch));
}

int main()
{
    string str;
    cout<<"Enter String : ";
    getline(cin,str);

    cout<<"Substring : ";
    substring_ascii(str,"");
    return 0;
}