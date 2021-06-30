#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter string length : ";
    cin>>n;
    cin.ignore();

    char a[n+1];
    cout<<"Enter String : ";
    cin.getline(a,n);
    cin.ignore();

    int len = INT_MIN;
    int curr_len = 0;
    int i=0 , start = 0 ;

    while(1)
    {
        if(a[i] == ' ' || a[i] == '\0')
        {
            if(curr_len > len)
            {
                len = curr_len;
                start = i - len;
            }
            curr_len = 0;
        }
        else
            curr_len++;
        if(a[i] == '\0')
        {
            break;
        }
        i++;
    }
    cout<<"Maximum word length : "<<len;
    cout<<"\nMaximum length Word : ";
    for(int i=0;i<len;i++)
    {
        cout<<a[start+i];
    }
   return 0;
}