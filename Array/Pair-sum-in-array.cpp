/* Given a random integer array A and a number x. 
Find and print the pair of elements in the array which sum to x. 

Array A can contain duplicate elements.*/

#include<bits/stdc++.h>
using namespace std;

void pairedElements(int * arr,int sum, int n)
{
  int low = 0;
  int high = n - 1;
 
  while (low < high)
  {
    if (arr[low] + arr[high] == sum)
    {
      cout << "(" <<arr[low] << ", " <<arr[high] << ")" << endl;
    }
    if (arr[low] + arr[high] > sum)
    {
      high--;
    }
    else
    {
      low++;
    }
  }
}
int main()
{
    int n;
    cout<<"Enter length of array : ";
    cin>>n;

    int a[n];
    cout<<"Enter elements in array : ";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    int sum ;
    cout<<"Enter sum : ";
    cin>>sum;

    sort(a,a+n);

    cout<<"Pairs are : \n";
    pairedElements(a,sum,n);
    return 0;
}