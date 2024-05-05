#include<bits/stdc++.h>
using namespace std;
bool bfs(int src,int col,int v,vector<vector<int>>&adj)
{  
  vector<int> vis(v,-1);
  vis[src]=col;
  queue<int>q;
  q.push(src);
  while(!q.empty())
  {
    int node=q.front();
    q.pop();
    for(auto it :adj[node])
    { 
      if(vis[it]==-1)
      {
        q.push(it);
        vis[it]=!(vis[node]);
        
      }
      else
      {
        if(vis[it]==vis[node])
            return false;
      }

    }

  }
  return true;
}

int main()
{
    int e,v;
    cout<<"Enter no of nodes";
    cin>>v;
    cout<<"Enter edges";
    cin>>e;
    vector<vector<int>>adj(v);
    for(int i=0;i<e;i++)
    {
       int u,v;
    cin>>u>>v;
    adj[u].push_back(v);
    adj[v].push_back(u);
    }
    bool res = bfs(0,0,v,adj);
    
    if(res==1)
    {
        cout<<"Yes bipartite";
    }
    else 
      cout<<"Not bipartite";

}
