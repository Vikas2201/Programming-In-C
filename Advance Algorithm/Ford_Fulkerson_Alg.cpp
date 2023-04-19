// Ford-Fulkerson algorith in C++
#include<bits/stdc++.h>
using namespace std;

// Using BFS as a searching algorithm
bool bfs(vector<vector<int>>& graph, int s, int t, int n, vector<int>& parent) 
{
  fill(parent.begin(),parent.end(),-1);
  queue<pair<int,int>> q;
  q.push({s,1e9});
  parent[s] = -2;

  while (!q.empty()) 
  {
    int u = q.front().first;
    int cap = q.front().second;
    q.pop();

    for (int v = 0; v < n; v++) 
    {
      if(u != v && graph[u][v] != 0 && parent[v] == -1)
      {
        parent[v] = u;
        int min_cap = min(cap,graph[u][v]);
        if(v == t)
        {
          return min_cap;
        }
        q.push({v,min_cap});
      }
    }
  }
  return 0;
}

// Applying fordfulkerson algorithm
int fordFulkerson(vector<vector<int>>& graph, int s, int t, int n) 
{
  vector<int> parent(n,-1);
  int max_flow = 0,min_cap = 0;

  // Updating the residual values of edges
  while (min_cap = bfs(graph, s, t, n, parent)) 
  {
    max_flow += min_cap;
    int v = t;
    
    while(v != s)
    {
      int u = parent[v];
      graph[u][v] -= min_cap;
      graph[v][u] += min_cap;
      v = u;
    }
  }
  return max_flow;
}

void addEdge(vector<vector<int>>& graph, int u, int v, int w)
{
  graph[u][v] = w;
}

int main() 
{
  int n;
  cout<<"Enter number of vertex : ";
  cin>>n;

  int e;
  cout<<"Enter number of edge : ";
  cin>>e;

  vector<vector<int>> graph(n, vector<int>(n,0)); 
  int u, v, w;
  for(int i=0;i<e;i++)
  {
    cout<<"Enter vertex(u) , vertex(v) and weight(w) : ";
    cin>>u>>v>>w;
    addEdge(graph,u,v,w); 
  }
  cout << "Max Flow: " << fordFulkerson(graph, 0, 5, n) << endl;
}