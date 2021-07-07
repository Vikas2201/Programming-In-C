/* Tower of Hanoi is a mathematical puzzle where we have three rods and n disks. The objective of the puzzle is to move all disks from source rod to destination rod using third rod (say auxiliary). The rules are :
    1) Only one disk can be moved at a time.
    2) A disk can be moved only if it is on the top of a rod.
    3) No disk can be placed on the top of a smaller disk.

    Print the steps required to move n disks from source rod to destination rod. */

#include<bits/stdc++.h>
using namespace std;

void tower_of_hanoi(int n , char src , char dest , char axu)
{
    if(n == 1)
    {
        cout<<"Disk move form "<<src<<" to "<<dest<<endl;
        return ;
    }
    tower_of_hanoi(n-1,src,axu,dest);
    cout<<"Disk Move From "<<src<<" To "<<dest<<endl;
    tower_of_hanoi(n-1,axu,dest,src);
}

int main()
{
    int n ;
    cout<<"Enter Number of Disk :";
    cin>>n;

    tower_of_hanoi(n,'A','C','B');
    return 0;
}