/* Given two random integer arrays, print their intersection. 
That is, print all the elements that are present in both the given arrays. 

Input arrays can contain duplicate elements. */

#include<bits/stdc++.h>
using namespace std;

void merge(int * a, int lb , int mid , int ub )
{
	int i,j,k,b[50];
	i=lb;
	j=mid+1;
	k=lb;
	while((i<=mid)&&(j<=ub))
	{
		if(a[i]<=a[j])
		{
			b[k]=a[i];
			i++;
		}
		else
		{
			b[k]=a[j];
			j++;
		}
		k++;
	}
	if(i>mid)
	{
		while(j<=ub)
		{
			b[k]=a[j];
			j++;
			k++;
		}
	}
	else
	{
		while(i<=mid)
		{
			b[k]=a[i];
			i++;
			k++;
		}
	}
	for(k=lb;k<=ub;k++)
	{
		a[k]=b[k];
	}
}
void merge_sort(int * a,int lb, int ub)
{
	int mid;
	if(lb<ub)
	{
		mid=(lb+ub-1)/2;
		merge_sort(a,lb,mid);
		merge_sort(a,mid+1,ub);
		merge(a,lb,mid,ub);
	}
}

bool linear_search(int * a , int n , int ele)
{
    for(int i=0;i<n;i++)
    {
        if(a[i] == ele)
        {
            return true;
        }
    }
    return false;
}

void Intersection_Array(int * a , int * b , int n, int m)
{
    int arr[10];
    int size = 0;
    for(int i=0;i<m ; i++)
    {
        if(linear_search(a,n,b[i]))
        {
            arr[size] = b[i];
            size++;
        }
    }
    cout<<"Intersection elements : ";
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int n , m;
    cout<<"Enter length of first array : ";
    cin>>n;

    cout<<"Enter length of second array : ";
    cin>>m;

    int a[n],b[m];
    cout<<"Enter element in first array : ";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    cout<<"Enter element in second array : ";
    for(int i=0;i<m;i++)
    {
        cin>>b[i];
    }

    merge_sort(a,0,n-1);

    Intersection_Array(a,b,n,m);
    
    return 0;
}
