#include<bits/stdc++.h>
using namespace std;
void addEdge(vector<int> g[],int u,int v )
{
  g[u].push_back(v);
  g[v].push_back(u);
}
void printGrapg(vector<int> g[],int n)
{
  for(int i=0;i<n;i++)
  {
    cout<<"["<<i<<"]: ";
    for(int x:g[i])
    cout<<x<<" ";
    cout<<"\n";
  }
}
void bfs(vector<int> g[],int n)
{
  queue<int> q;
  bool visit[n+1]={false};
  q.push(4);
  while(!q.empty())
  {
    int node = q.front();
    q.pop();
    cout<<node<<" ";
      visit[node]=true;
    for(auto it:g[node])
    {
      if(!visit[it])
      {
        visit[it]=true;
        q.push(it);
      }
    }
    }

}
int main()
{
  //number of vertex
  int n=7;
  vector<int> g[7];
    addEdge(g, 0, 1);
    addEdge(g, 0, 2);
    addEdge(g, 1, 3);
    addEdge(g, 1, 4);
    addEdge(g, 2, 5);
    addEdge(g, 2, 6);
    bfs(g,n);
    cout<<"\n";
    printGrapg(g,n);
}
