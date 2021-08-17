#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cout<<"Enter String : ";
    getline(cin,str);

    int count[26] = {0};

    for(int i=0;i<str.size();i++)
    {
        count[str[i] - 'a']++;
    }

    int max_freq = 0;
    char result = 'a';

    for(int i=0;i<26;i++)
    {
        if(max_freq < count[i])
        {
            max_freq = count[i];
            result = result + i;
        }
    }

    cout<<"Maximum Occuring Character : ' "<<result ;
    cout<<" ' And Its Frequency : "<<max_freq;

    return 0;

}