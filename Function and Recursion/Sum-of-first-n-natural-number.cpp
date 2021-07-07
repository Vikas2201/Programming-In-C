#include<iostream>
using namespace std;

int sum(int n )
{
    int result = 0;
    for(int i = 1 ; i<=n ;i++)
    {
        result = result + i ;
    }
    return result;
}

int main()
{
    int n ;
    cout<<"Enter Value of n : ";
    cin>>n;

    cout<<"Sum of First "<<n<<" Natural Number : "<<sum(n);
    return 0;
}