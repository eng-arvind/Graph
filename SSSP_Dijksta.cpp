#include<bits/stdc++.h>
#include<math.h>
#include<list>
#include<limits>
using namespace std;
void addEdge(vector<pair<int,int> > g[],int u,int v,int w)
{
  g[u].push_back(make_pair(v,w));

}
void djkstra(vector<pair<int,int> >g[],int src,int n)
{
  set<pair<int,int> > setds;
  vector<int> dist(n,INT_MAX);
  setds.insert(make_pair(0,src));
  dist[src]=0;
  while(!setds.empty())
  {
    pair<int,int> temp=*(setds.begin());
    setds.erase(setds.begin());
    int u=temp.second;
    vector<pair<int, int> >::iterator i;
    for(i=g[u].begin();i!=g[u].end();++i)
    {
      int v=(*i).first;
      int weight =(*i).second;
      if(dist[u]+weight<dist[v])
      {
        if(dist[v]!=INT_MAX)
        setds.erase(setds.find(make_pair(dist[v],v)));
        dist[v]=dist[u]+weight;
        setds.insert(make_pair(dist[v],v));

      }
    }
  }
  for(int i=1;i<n;i++)
  cout<<dist[i]<<" ";
}
int main()
{
  int n=7;
  vector<pair<int,int> > g[n];
  addEdge(g, 1, 2, 6);
  addEdge(g, 1, 3, 4);
  addEdge(g, 2, 1, 6);
  addEdge(g, 2, 3,1);
  addEdge(g, 2, 5,6);
  addEdge(g, 3, 1,4);
  addEdge(g, 3, 2,1);
  addEdge(g, 3, 4,2);
  addEdge(g, 4, 3,2);
  addEdge(g, 4, 5,3);
  addEdge(g, 4, 6,11);
  addEdge(g, 5, 2,6);
  addEdge(g, 5, 4,3);
  addEdge(g, 5, 6,1);
  addEdge(g, 6, 4,11);
  addEdge(g, 6, 5,1);
  int src=1;
 djkstra(g,src,n);
}
