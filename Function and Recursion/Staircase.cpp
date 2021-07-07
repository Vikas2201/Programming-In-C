/* A child is running up a staircase with N steps, and can hop either 1 step, 2 steps or 3 steps at a time. 
Implement a method to count how many possible ways the child can run up to the stairs.
 You need to return number of possible ways W. */

 #include<bits/stdc++.h>
 using namespace std;

 int staircase(int n)
 {
    if(n == 1)
    {
        return 1;
    }
    else if(n == 2)
    {
        return 2 ;
    }
    else if(n == 3)
    {
        return 4 ;
    }
    return staircase(n-1) + staircase(n-2) + staircase(n-3) ;
 }

 int main()
 {
    int n ;
    cout<<"Enter Number Of steps : ";
    cin>>n;

    cout<<"total number of ways : "<<staircase(n);
    return 0;
 }