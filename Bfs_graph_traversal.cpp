#include<bits/stdc++.h>
using namespace std;
class Graph{
    int V;
    list<int>*adj;
    public:
    Graph(int v);
    void addEdge(int u, int v);
    void Bfs(int s);
}
Graph::Graph(int v)
{
    this->v=v;
    adj= new list<int>[v];
}
Graph::addEdge(int u,int v)
{
    adj[u].push_back(v);
}
Graph::Bfs(int s)
{
    bool *visited= new bool[v];
    for(int i=0;i<v;i++)
    {
        visited[i]=false;
    }
    list<int>queue;
    visited[s]=true;
    queue.push_back(s);
    while(!queue.empty())
    {
        s=queue.front();
        cout<<s<<" ";
        queue.pop_front();
    for(auto i=adj[s].begin();i!=adj[s].end();i++)
    {
        if(!visited[*i])
        {
            visited[*i]=true;
            queue.push_back(*i);
        }

    }
}
int main()
{
    Graph g(4);
    g.addEdge(0,1);
        g.addEdge(0,2);
            g.addEdge(1,2);
                g.addEdge(2,0);
                    g.addEdge(2,3);
                        g.addEdge(3,3);
                        g.Bfs(2);

}