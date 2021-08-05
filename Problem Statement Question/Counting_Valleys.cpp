/* An avid hiker keeps meticulous records of their hikes. During the last hike that took exactly  steps, 
for every step it was noted if it was an uphill,U , or a downhill,D step. Hikes always start and end at sea level, 
and each step up or down represents a  unit change in altitude. We define the following terms:

A mountain is a sequence of consecutive steps above sea level, starting with a step up from sea level and ending with 
a step down to sea level.
A valley is a sequence of consecutive steps below sea level, starting with a step down from sea level and ending with 
a step up to sea level.

Given the sequence of up and down steps during a hike, find and print the number of valleys walked through. */

#include<bits/stdc++.h>
using namespace std;

int countingValleys(int steps, string path) 
{
    int sum = 0;
    int count =0;
    for(int i=0;i<steps;i++)
    {
        if(path[i] == 'U')
        {
            if(++sum == 0)
            {
                count++;
            }
        }
        else {
            sum--;
        }
    }
    return count;

}

int main()
{
    
    string str ;
    cout<<"Enter for up 'U' and for down 'D' : ";
    getline(cin, str); 

    int steps;
    cout<<"Enter Number of steps : ";
    cin>>steps;

    cout<<"Number of valleys walked through : "<<countingValleys(steps,str);
    return 0;
}