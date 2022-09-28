#include<bits/stdc++.h>
using namespace std;
void addEdge(vector<int>adj[],int u, int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}
void printList(vector<int>adj[],int NumberOfVertices)
{
    for(int i=0; i< NumberOfVertices; i++)
    {
        cout<<i;
      for(auto x: adj[i])
      {
          cout<<"->"<<x;
      }
      cout<<"\n";
    }
}
int main()
{
    int NumberOfVertices;
    cin>>NumberOfVertices;
    vector<int>adj[NumberOfVertices];//every ith array position contains a list of neighours or adjacency
    addEdge(adj,0,1);
    addEdge(adj,0,4);
       addEdge(adj,1,2);
          addEdge(adj,1,3);
             addEdge(adj,1,4);
                addEdge(adj,2,3);
                   addEdge(adj,3,4);
                   printList(adj,NumberOfVertices);
                   return 0;


}