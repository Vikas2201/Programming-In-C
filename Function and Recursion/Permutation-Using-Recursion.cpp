/* Find Permutation Of A string Using Recursion */
#include<bits/stdc++.h>
using namespace std;

void permutation(string str , string result)
{
    if(str.size() == 0)
    {
        cout<<result<<endl;
        return;
    }
    for(int i=0;i<str.size();i++)
    {
        char ch = str[i];
        string rest_str = str.substr(0,i) + str.substr(i+1);
        
        permutation(rest_str,result+ch);
    }
}

int main()
{
    string str;
    cout<<"Enter String : ";
    getline(cin,str);

    cout<<"All Possible Permutation Of A String "<<str<<" : ";
    permutation(str,"");
    return 0;
}