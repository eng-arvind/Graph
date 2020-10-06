#include<bits/stdc++.h>
using namespace std;
void addEdge(int matrix[][5],int u,int v)
{
  matrix[u][v]=1;
  matrix[v][u]=1;
}
void printGrapg(int matrix[][5])
{
  for(int i=0;i<5;i++)
  {
    cout<<"["<<i<<"]:";
    for(int j=0;j<5;j++)
    {
      if(matrix[i][j]!=0)
      cout<<j<<" ";
    }
    cout<<"\n";
  }
}
int main()
{
//  int n=5;
  int matrix[5][5]={0};
  addEdge(matrix,0,1);
  addEdge(matrix,0,4);
  addEdge(matrix,1,2);
  addEdge(matrix,1,3);
  addEdge(matrix,1,4);
  addEdge(matrix,2,3);
  addEdge(matrix,3,4);
  printGrapg(matrix);
  return 0;

}
