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
    
   
    bool dfsRec(int src, vector<bool> &vis,int par)
    {
       
        vis[src]=true;
         //cout<<src<<" ";
        for(int n:l[src])
        {
            if(!vis[n])
            {
                if(dfsRec(n,vis,src)) return true;
            }    
            else if((par!=n) )
            {
                return true;
            }   
        }

        return false;
    }
    bool IsCycle()
    {
        
        int src=0;
        vector<bool> vis(V,false);
        return dfsRec(src,vis,-1);

        
    }
};
int main() {
    Graph g(4);
    g.AddEdge(0,1);
    g.AddEdge(1,2);
    g.AddEdge(1,3);
    g.AddEdge(2,3);
    

   
        cout<<g.IsCycle();
    return 0;
}