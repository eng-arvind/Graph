#include<bits/stdc++.h>
using namespace std;
void addEdge(vector<pair<int,pair<int,int>> > g[],int u,int v,int w)
{
  g[u].push_back(make_pair(w,make_pair(u,v)));
}
void bellman_ford(vector<pair<int,pair<int,int>> > g[],int src,int n)
{
  int dist[n];
  for(int i=1;i<n;i++)
  dist[i]=INT_MAX;
  dist[src]=0;
  for(int k=1;k<n;k++)
  for(int i=1;i<n;i++)
  {
    for(int j=0;j<g[i].size();j++)
    {
      int u=g[i][j].second.first;
      int v=g[i][j].second.second;
      int w=g[i][j].first;
      if(dist[u]!=INT_MAX && (dist[u]+w)<dist[v])
      dist[v]=dist[u]+w;
    }
  }

  // check for negative cycle
  for(int i=1;i<n;i++)
  {
    for(int j=0;j<g[i].size();j++)
    {
      int u=g[i][j].second.first;
      int v=g[i][j].second.second;
      int w=g[i][j].first;
      if(dist[u]!=INT_MAX && (dist[u]+w)<dist[v])
      {
        cout<<"negative cycle\n";
        break;
      }
    }
  }
  // print shortest path for all vertex form source
  for(int i=1;i<n;i++)
  cout<<dist[i]<<" ";
  cout<<"\n";

}
int main()
{
    int n=5;
    vector<pair<int,pair<int,int>> > g[n];
    //input for noraml negative weighted directed graph
    // addEdge(g, 1, 2, 6);
    // addEdge(g, 1, 3, 5);
    // addEdge(g, 1, 4, 5);
    // addEdge(g, 2, 5, -1);
    // addEdge(g, 3, 2,-2);
    // addEdge(g, 3, 5, 1);
    // addEdge(g, 4, 3,-2);
    // addEdge(g, 4, 6,-1);
    // addEdge(g, 5, 7,3);
    // addEdge(g, 6, 7,3);
    // this input for chacking negative cycle check for negative cycle->>
    // addEdge(g, 1, 2, 4);
    // addEdge(g, 1, 4, 5);
    // addEdge(g, 2 , 4 ,5);
    // addEdge(g, 3 ,2, -10);
    // addEdge(g, 4, 3, 3);
    int src=1;
    bellman_ford(g,src,n);

}
