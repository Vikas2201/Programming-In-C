/*Two random integer arrays/lists have been given as ARR1 and ARR2 of size N and M respectively. 
Both the arrays/lists contain numbers from 0 to 9(i.e. single digit integer is present at every index).
The idea here is to represent each array/list as an integer in itself of digits N and M.

You need to find the sum of both the input arrays/list treating them as two integers and
put the result in another array/list i.e. output array/list will also contain only single digit at every index. */

#include<bits/stdc++.h>
using namespace std;

void reverse_array(int * c , int k)
{
    int low = 0 , high = k-1;
    int temp;
    while(low < high)
    {
        temp = c[low];
        c[low] = c[high];
        c[high] = temp;
        low++ ;
        high--;
    }
}

void add_array(int * a, int * b , int n , int m)
{
    int i = n-1 , j = m-1 , k =0;
    int carry = 0;
    int c[10] = {0};
    while(i >=0 && j >= 0)
    {
        if((a[i] + b[j] + carry) > 10)
        {
            c[k] = (a[i] + b[j] + carry) % 10 ;
            carry = (a[i] + b[j] + carry) / 10;
        }
        else
        {
            c[k] = a[i] + b[j] + carry ;
            carry = 0;
        }
        k++;
        i--;
        j--;
    }
    while(i >= 0)
    {
        if(carry == 1 || ((a[i] + carry) > 10))
        {
            c[k] = (a[i] + carry) % 10;
            carry = 0;
        }
        else
        {
            c[k] = a[i];
            carry = 0;
        }
        k++;
        i--;
    }
    while(j >= 0)
    {
        if(carry == 1 || ((b[j] + carry) > 10))
        {
            c[k] = (b[j] + carry) % 10;
            carry = 0;
        }
        else
        {
            c[k] = a[j];
            carry = 0;
        }
        k++;
        j--;
    }
    if( carry == 1)
    {
        c[k] = 1;
        k++;
    }
    else
    {
        c[k] = 0;
        k++;
    }

    // Reverse the array for getting result
    reverse_array(c,k);
    cout<<"Sum of two array : ";
    for(int i=0 ; i<k;i++)
    {
        cout<<c[i]<<" ";
    }
}

int main()
{
    int test ;
    cout<<"how many test case u enter : ";
    cin>>test;

    for(int i=0;i<test;i++)
    {
        cout<<"\nfor "<<i+1<<" test case";
        int n , m;
        cout<<"\nEnter length of first array : ";
        cin>>n;

        int a[n];
        cout<<"Enter elements in first array : ";
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }

        cout<<"\nEnter length of second array : ";
        cin>>m;

        int b[m];
        cout<<"Enter elements in second array : ";
        for(int i=0;i<m;i++)
        {
            cin>>b[i];
        }

        add_array(a,b,n,m);
    }
    return 0;
}