#include<bits/stdc++.h>
using namespace std;

int count(string str)
{
    int len = 0 , start = -1;
    vector<int> dict(256,-1);
    for(int i=0;i<str.size();i++)
    {
        if(dict[str[i]] > start)
        {
            start = dict[str[i]];
        }
        dict[str[i]] = i;
        len = max(len , i-start);
    }
    return len;
}

int main()
{
    string str;
    cout<<"\nENTER STRING : ";
    getline(cin,str);

    cout<<"\nLENGTH OF LONGEST SUBSTRING WITHOUT REPEATING CHARACTERS : "<<count(str);
    return 0;
}