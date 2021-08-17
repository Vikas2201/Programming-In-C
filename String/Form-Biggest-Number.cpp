#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cout<<"Enter Numeric String : ";
    getline(cin,str);

    sort(str.begin() , str.end() , greater<int>());

    cout<<"Biggest Number Form From String : "<<str;
    return 0;
}