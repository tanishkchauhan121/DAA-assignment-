#include<bits/stdc++.h>
using namespace std;
bool bfs(int src,int col,int v,vector<vector<int>>&adj)
{  
  int vis[v]={0};
  vis[src]=1;
  queue<pair<int,int>>q;
  q.push({src,col});
  while(!q.empty())
  {
    pair<int,int> node=q.front();
    pair<int,int>child;
    q.pop();
    for(auto it:adj[node.first])
    { 
      child = {it,!(node.second)};
      if(!vis[it])
      {
        q.push({it,!(node.second)});
        vis[it]=1;
        
      }
      else
      {
        if(child.second==node.second)
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
    bool res = bfs(0,1,v,adj);
    
    if(res==1)
    {
        cout<<"true";
    }
    else 
      cout<<"false";

}
