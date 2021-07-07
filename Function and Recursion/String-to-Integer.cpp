#include<bits/stdc++.h>
using namespace std ;

int convert(string str)
{
    if (str.length() == 1)
    {
        return str[0] - '\0';
    }
    int y = convert(str.substr(1));

    int x = str[0] - '\0';

    x = x * pow(10,str.length() - 1) + y;
    return x;
}

int main()
{
    string str ;
    cout<<"Enter String : ";
    cin>>str;

    cout<<"Integer String : "<<convert(str);
    return 0;
}