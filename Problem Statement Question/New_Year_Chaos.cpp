/* It is New Year's Day and people are in line for the Wonderland rollercoaster ride. 
Each person wears a sticker indicating their initial position in the queue from 1 to n. 
Any person can bribe the person directly in front of them to swap positions, but they still wear their original sticker. 
One person can bribe at most two others.

Determine the minimum number of bribes that took place to get to a given queue order. 
Print the number of bribes, or, if anyone has bribed more than two people, print Too chaotic.

*/

#include<bits/stdc++.h>
using namespace std;

void minimumBribes(vector<int> q) 
{
    int ans = 0;
    for (int i = q.size() - 1; i >= 0; i--) 
    {
        if (q[i] - (i + 1) > 2) 
        {
            cout << "Too chaotic" << endl;
            return;
        }
        for (int j = max(0, q[i] - 2); j < i; j++)
            if (q[j] > q[i]) ans++;
    }
    cout << ans << endl;
}

int main()
{
    int n;
    cout<<"Enter size : ";
    cin>>n;

    vector<int> q(n);
    cout<<"Enter element : ";
    for(int i=0;i<n;i++)
    {
        cin>>q[i];
    }

    minimumBribes(q);
    return 0;
}
