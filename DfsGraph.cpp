#include<bits/stdc++.h>
using namespace std;
class DfsGraph{
public:
    map<int, bool>visited;
    map<int,list<int>>adj;

    void addEdge(int u,int v);
    void Dfs(int root);

};
void DfsGraph::addEdge(int u,int v)
{
    adj[u].push_back(v);
}
void DfsGraph::Dfs(int root)
{
    visited[root]=true;
    cout<<root<<" ";
    for(auto it=adj[root].begin();it!=adj[root].end();it++)
    {
        if(!visited[*it])
            Dfs(*it);

    }

}

int main()
{
 DfsGraph g;

 g.addEdge(0,1);
 g.addEdge(0,2);
 g.addEdge(1,2);
 g.addEdge(1,3);
 g.addEdge(2,0);
 g.addEdge(2,1);
 g.addEdge(3,3);
 g.Dfs(2);

}
