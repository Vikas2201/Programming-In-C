/* Print all the possible words from Phone Digits */

#include<bits/stdc++.h>
using namespace std;

string keywords[] = {"" , "./" , "abc" , "def" , "ghi" , "jkl" , "mno" , "pqrs" , "tuv" , "wxyz"};

void print_words(string str , string result)
{
    if(str.size() == 0)
    {
        cout<<result<<endl;
        return;
    }
    char ch = str[0];
    string str_code = keywords[ch - '0'];
    string ans = str.substr(1);

    for(int i=0;i<str_code.size();i++)
    {
        print_words(ans,result+str_code[i]);
    }
}

int main()
{
    string str;
    cout<<"Enter Two Number Between 0 to 9 : ";
    getline(cin,str);

    cout<<"Words From Phone Digits : ";
    print_words(str,"");    
    return 0;
}