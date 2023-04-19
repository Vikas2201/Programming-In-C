#include<bits/stdc++.h>
using namespace std;

const int MAXN = 100;

vector<int> adjList[MAXN];
bool visited[MAXN];
bool independentSet[MAXN];

void dfs(int node) 
{
    visited[node] = true;
    independentSet[node] = true;
    for (int i = 0; i < adjList[node].size(); i++) 
    {
        int neighbor = adjList[node][i];
        if (!visited[neighbor]) 
        {
            dfs(neighbor);
        }
        independentSet[node] &= !independentSet[neighbor];
    }
}

void findMaximalIndependentSet(int n) 
{
    for (int i = 0; i < n; i++) 
    {
        if (!visited[i]) 
        {
            dfs(i);
        }
    }
}

int main() 
{
    int n, m;
    cout<<"Enter number of vertices and edges in a graph : ";
    cin>>n>>m;
    cout<<"Enter Edges : ";
    for (int i = 0; i < m; i++) 
    {
        int u, v;
        cin >> u >> v;
        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }

    findMaximalIndependentSet(n);
    cout<<"Vertices in Maximal Independent Set : ";
    for (int i = 0; i < n; i++) 
    {
        if (independentSet[i]) 
        {
            cout << i << " ";
        }
    }
    return 0;
}