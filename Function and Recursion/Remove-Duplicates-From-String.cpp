/* Remove Duplicates Character From String Using Recursion */

#include<bits/stdc++.h>
using namespace std;

string remove_duplicate(string str)
{
    if(str.length() == 0)
    {
        return "";
    }
    char ch = str[0];
    string result = remove_duplicate(str.substr(1));

    if(result[0] == ch)
    {
        return result;
    }
    else
    {
        return ch+result ;
    }

}

int main()
{
    string str;
    cout<<"Enter String : ";
    getline(cin,str);

    cout<<"String After Removing Duplicates Character : "<<remove_duplicate(str);
    return 0;
}