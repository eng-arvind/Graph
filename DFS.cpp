#include<bits/stdc++.h>
using namespace std;
void addEdge(vector<int> g[],int u,int v)
{
  g[u].push_back(v);
  g[v].push_back(u);
}
void printGrapg(vector<int> g[],int n)
{
  for(int i=0;i<n;i++)
  {
    cout<<"["<<i<<"]:";
    for(auto it:g[i])
    cout<<it<<" ";
    cout<<"\n";
  }
}
void dfs(vector<int> g[],int n)
{
  bool visited[n+1]={false};
  stack<int> s;
  s.push(0);
  while(!s.empty())
  {
    int node = s.top();
    s.pop();
    cout<<node<<" ";
    visited[node]=true;
    for(auto it:g[node])
    {
      if(!visited[it])
      {
        s.push(it);
        visited[it]=true;
      }

    }
  }

}

int main()
{
  int n=7;
  vector<int> g[n];
  addEdge(g, 0, 1);
  addEdge(g, 0, 2);
  addEdge(g, 1, 3);
  addEdge(g, 1, 4);
  addEdge(g, 2, 5);
  addEdge(g, 2, 6);
  dfs(g,n);
//  printGrapg(g,n);
  return 0;

}
