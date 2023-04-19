#include<bits/stdc++.h>
using namespace std;

bool bipartiteMatch(int u, vector<bool>& visited, vector<int>& assign,vector<vector<bool>>& bipartiteGraph,int M, int N) {
   for (int v = 0; v < N; v++) {    //for all jobs 0 to N-1
      if (bipartiteGraph[u][v] && !visited[v]) {    //when job v is not visited and u is interested
         visited[v] = true;    //mark as job v is visited
         //when v is not assigned or previously assigned
         if (assign[v] < 0 || bipartiteMatch(assign[v], visited, assign, bipartiteGraph, M, N)) {
            assign[v] = u;    //assign job v to applicant u
            return true;
         }
      }
   }
   return false;
}

int maxMatch(vector<vector<bool>>& bipartiteGraph,int M, int N) 
{
   vector<int> assign(N);    //an array to track which job is assigned to which applicant
   for(int i = 0; i<N; i++)
      assign[i] = -1;    //initially set all jobs are available
   int jobCount = 0;

   for (int u = 0; u < M; u++) 
   {
      vector<bool> visited(N);
      for(int i = 0; i<N; i++)
         visited[i] = false;    //initially no jobs are visited
      if (bipartiteMatch(u, visited, assign, bipartiteGraph, M, N))    //when u get a job
         jobCount++;
   }
   return jobCount;
}

int main() 
{
   int M,N;
   cout<<"Enter no. of jobs and applicant : ";
   cin>>M>>N;

   //A graph with M applicant and N jobs
   vector<vector<bool>> bipartiteGraph {{0, 1, 1, 0, 0, 0}, {1, 0, 0, 1, 0, 0},
   {0, 0, 1, 0, 0, 0},
   {0, 0, 1, 1, 0, 0},
   {0, 0, 0, 0, 0, 0},
   {0, 0, 0, 0, 0, 1}};

   cout << "Maximum number of applicants matching for job: " << maxMatch(bipartiteGraph,M,N);
   return 0;
}