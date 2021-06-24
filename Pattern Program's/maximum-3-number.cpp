#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    cin>>a;
    cin>>b;
    cin>>c;
    if(a>b){
        if(a>c)
        {
            cout<<a<<" is greater among all";
        }
        else
        {
            cout<<c<<" is greater among all";
        }
    }
    else
    {
        if(b>c)
        {
            cout<<b<<" is greater among all";
        }
        else
        {
            cout<<c<<" is greater among all";
        }
    }
    return 0;
}
