/* You have been given a random integer array/list(ARR) of size N.
 You are required to find and return the second largest element present in the array/list. */

 #include<bits/stdc++.h>
 using namespace std;

 int second_largest(int* a, int n)
 {
    int i=n-2;
    while(i>=0)
    {
        if(a[n-1] > a[i])
        {
            return a[i];
        }
        i--;
    }
    return -2147483648;
 }

 int main()
 {
    int test ;
    cout<<"how many test case u enter : ";
    cin>>test;

    for(int i=0;i<test;i++)
    {
        cout<<"\nfor "<<i+1<<" test case";
        int n ;
        cout<<"\nEnter length of array : ";
        cin>>n;

        int a[n];
        cout<<"Enter elements in array : ";
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }

        sort(a,a+n);

        int result = second_largest(a,n);
        if(result != -2147483648)
        {
            cout<<"Second Largest element "<<result;
        }
        else
        {
            cout<<"Second largest element does not exit";
        }
    }
    return 0;
 }
