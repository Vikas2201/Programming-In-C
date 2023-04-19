/*Implement Incremental Dynamic Connectivity problem. */
#include<bits/stdc++.h>
using namespace std;

int root(int arr[],int i)
{
    while (arr[i] != i)
    {
       arr[i] = arr[arr[i]];
       i = arr[i];
    }
    return i;
}

void Union(int arr[],int rank[],int a,int b)
{
    int root_a = root(arr, a);
    int root_b = root(arr, b);
 
    // union based on rank
    if (rank[root_a] < rank[root_b])
    {
       arr[root_a] = arr[root_b];
       rank[root_b] += rank[root_a];
    }
    else
    {
        arr[root_b] = arr[root_a];
        rank[root_a] += rank[root_b];
    }
}

bool aresame(int arr[],int a,int b)
{
    return (root(arr, a) == root(arr, b));
}

void query(int type,int a,int b,int arr[],int rank[])
{
    if(type == 1)
    {
        if(aresame(arr,a,b) == true)
            cout<<"YES";
        else
            cout<<"NO";
    }
    else if(type == 2)
    {
        if (aresame(arr, a, b) == false)
            Union(arr, rank, a, b);
    }
}

int main()
{
    int n;
    cout<<"Enter no. of vertices : ";
    cin>>n;

    int q;
    cout<<"How much query you are perform : ";
    cin>>q;

    int arr[n], rank[n];
 
    // initializing both array and rank
    for (int i=0; i<n; i++)
    {
        arr[i] = i;
        rank[i] = 1;
    }

    int type , a, b;
    for(int i=0;i<q;i++)
    {
        cin>>type>>a>>b;
        cout<<"Whether the component connected in graph : ";
        query(type,a,b,arr,rank);
    }

    return 0;
}
