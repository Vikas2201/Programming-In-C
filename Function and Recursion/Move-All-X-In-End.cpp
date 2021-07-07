#include<bits/stdc++.h>
using namespace std;

string Move_X(string str )
{
    if(str.size() == 0)
    {
        return "";
    }

    char ch = str[0];
    string result = Move_X(str.substr(1));

    if(ch =='x')
    {
        return result+ch;
    }

    return ch+result;
}

int main()
{
    string str;
    cout<<"Enter String : ";
    getline(cin,str);

    cout<<"Updated String : "<<Move_X(str);
    return 0;
}