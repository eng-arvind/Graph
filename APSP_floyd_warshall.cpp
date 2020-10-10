#include<bits/stdc++.h>
using namespace std;
void addEdge(vector<int> g[],int u,int v,int w)
{
  g[u][v]=w;
}
int main()
{
  int n=5;
  vector<int> g[n];
  int mx=INT_MAX;
  for(int i=1;i<n;i++)
  for(int j=1;j<n;j++)
  {
    if(i==j)
    g[i].push_back(0);
    else
     g[i].push_back(INT_MAX);
  }

  // addEdge(g,1,2,3);
  // addEdge(g,1,4,7);
  // addEdge(g,2,1,8);
  // addEdge(g,2,3,2);
  // addEdge(g,3,1,5);
  // addEdge(g,3,4,1);
  // addEdge(g,4,1,2);
  for(int i=1;i<n;i++)
  {
  for(int j=1;j<n;j++)
   cout<<g[i][j]<<" ";
   cout<<"\n";
  }

}
