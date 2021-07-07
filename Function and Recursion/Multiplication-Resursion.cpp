/*Given two integers M & N, calculate and return their multiplication using recursion. 
You can only use subtraction and addition for your calculation. No other operators are allowed.*/

#include<iostream>
using namespace std;

int multiply(int a, int b)
{
    if(a == 0 || b == 0)
    {
        return 0;
    }
    else
    {
        return (a + multiply(a,b-1)) ;
    }
}

int main()
{
    int a, b ;
    cout<<"Enter first number : ";
    cin>>a;
    cout<<"Enter second number : ";
    cin>>b;

    cout<<"Multiplication of "<<a<<" and "<<b<<" : "<<multiply(a,b);
    return 0;
}
