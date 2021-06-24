#include<iostream>
using namespace std;

int main()
{
    int n , i , j;
    cout<<"Enter Number Of Row : ";
    cin>>n;
    
    int num = (n / 2) *3;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i == n/2 || j == n/2 || i-j ==n/2 || i+j == n/2 || j - i == n / 2 || i + j == num)
            {
                cout<<"* ";
            }
            else 
            {
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}