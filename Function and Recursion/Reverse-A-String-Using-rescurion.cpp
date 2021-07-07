#include<bits/stdc++.h>
using namespace std;

void reverse_string(string str , int n , int i = 0)
{
    if( i == n)
    {
        return;
    }
    reverse_string(str , n , i+1);
    cout<<str[i];
}

int main()
{
    
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    cout<<"String In Reverse Order : ";
    reverse_string(str,str.size());
    return 0;

}