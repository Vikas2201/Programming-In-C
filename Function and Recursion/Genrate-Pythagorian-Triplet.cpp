#include<iostream>
#include<cmath>
using namespace std;

bool checkperfectsquare(int n)
{
    if (ceil((double)sqrt(n)) == floor((double)sqrt(n))) 
    {
        return true;
    }
    else 
    {
        return false;
    }
}

void genrate(int m)
{
    int a , b , c;
    a = 2*m;
    b = m*m - 1;
    c = m*m + 1;
    cout<<"Pythagorian Triplet : "<<a<<" , "<<b<<" , "<<c;
    return ;
}

int main()
{
    int num,m ;
    cout<<"Enter first triplet value : ";
    cin>>num;

    if(num % 2 == 0)
    {
        m = num/2;
        genrate(m);
    }
    else if(checkperfectsquare((num+1)))
    {
        m = sqrt((num+1));
        genrate(m);
    }
    else if(checkperfectsquare((num-1)))
    {
        m = sqrt((num-1));
        genrate(m);
    }
    else
    {
        cout<<"Pythagorian triplets are not possible using this number";
    }
    return 0;
}