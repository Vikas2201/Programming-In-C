/* Construction of Min Heap Using Array */

#include<bits/stdc++.h>
using namespace std;

void heapify(vector<int> &arr,int n,int i)
{
    int parent = i;
    int left = (2*i)+1;
    int right = (2*i)+2;

    if(left < n && arr[left] > arr[parent])
        parent = left;
    if(right < n && arr[right] > arr[parent])
        parent = right;
    if(parent != i)
    {
        swap(arr[parent],arr[i]);
        heapify(arr,n,parent);
    }
}

void Min_heap(vector<int> &arr,int n)
{
    int last_leaf_node = n/2 - 1;
    for(int i= last_leaf_node;i>=0;i--)
    {
        heapify(arr,n,i);
    }
}

int main()
{
    int n;
    cout<<"How many node are there? ";
    cin>>n;

    vector<int> arr(n);
    cout<<"Enter value of node :";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    Min_heap(arr,n);

    cout<<"Min heap : ";
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    return 0;
}