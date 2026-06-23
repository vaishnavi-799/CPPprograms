// undirected graph-Adgacency list
#include <bits/stdc++.h>
using namespace std;
class Graph{
    int V;
     list<int> *l;
     public:
    Graph(int V)
    {
        this->V=V;
       l=new list<int> [V];
        
    }
    
    
    void AddEdge(int u,int v)
    {
        l[u].push_back(v);
        l[v].push_back(u);
    }
    
    void printGraph()
    {
        for(int i=0;i<V;i++)
        {
            cout<<i<<" : ";
            for(int n:l[i])
            {
                cout<<n<<" ";
            }
            
            cout<<endl;
        }
    }
    void bfs()
    {
        queue<int>q;
        int vis[V]={0};
        vis[0]=1;
        q.push(0);
        while(q.size()>0)
        {
            int u=q.front();
            q.pop();
            cout<<u<<"  ";
            
            for(int n:l[u])
            {
                if(!vis[n])
                {
                    vis[n]=1;
                    q.push(n);
                }
            }
            
            //cout<<endl;
        }
    }
    void dfsRec(int src, vector<bool> &vis)
    {
       
        vis[src]=true;
         cout<<src<<" ";
        for(int n:l[src])
        {
            if(!vis[n])
                dfsRec(n,vis);
        }
    }
    void dfs()
    {
         vector<bool> vis(V, false);

        for(int i = 0; i < V; i++)
        {
            if(!vis[i])
                dfsRec(i, vis);
        }
    }
};
int main() {
    Graph g(4);
    g.AddEdge(0,1);
    g.AddEdge(1,2);
    g.AddEdge(1,3);
    g.AddEdge(2,3);
    g.dfs();
    return 0;
}