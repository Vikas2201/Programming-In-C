#include<bits/stdc++.h>
using namespace std;

void Union(int* a1,int* a2,int n1 , int n2)
{
    set<int> s;
    for(int i=0;i<n1;i++)
    {
        s.insert(a1[i]);
    }
    for(int i=0;i<n2;i++)
    {
        s.insert(a2[i]);
    }
    cout<<"Union of two array : ";
    for(set<int>::iterator itr = s.begin();itr != s.end();itr++)
    {
        cout<<*itr<<" ";
    }
}

void Intersection(int* a1 ,int* a2 , int n1 , int n2)
{
    set<int> s;
    int i =0,j =0;
    while(i < n1 && j <n2 )
    {
        if(a1[i] == a2[j])
        {
            s.insert(a1[i]);
            i++;
            j++;
        }
        else if(a1[i] > a2[j])
        {
            j++;
        }
        else
        {
            i++;
        }
    }

    cout<<"\nIntersection of two array : ";
    for(auto itr = s.begin();itr != s.end() ; itr++)
    {
        cout<<*itr<<" ";
    }
}

int main()
{
    int n1 , n2;
    cout<<"Enter size of 1st array : ";
    cin>>n1;

    int arr1[n1];
    cout<<"Enter element in 1st array : ";
    for(int i=0;i<n1;i++)
    {
        cin>>arr1[i];
    } 

    cout<<"Enter size of 2nd array : ";
    cin>>n2;

    int arr2[n2];
    cout<<"Enter element in 2nd array : ";
    for(int i=0;i<n2;i++)
    {
        cin>>arr2[i];
    }

    Union(arr1,arr2,n1,n2);

    Intersection(arr1,arr2,n1,n2);
    return 0;
}