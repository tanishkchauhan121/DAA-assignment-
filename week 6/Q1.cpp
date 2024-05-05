#include<bits/stdc++.h>
using namespace std;
void dfs(vector<vector<int>> &adj,int src,int des,int v)
{
  vector<int>vis(v,0);
  stack<int>s;
  vis[src]=1;
  s.push(src);
  int node,flag=0;;
  while(!s.empty()){
  node = s.top();
  if(node==des){
        cout<<"Path exist";
        flag=1;
        return;
    }
  s.pop();
  vis[node]=1;
  for(auto it:adj[node]){
    if(!vis[it]){
        s.push(it);
        
        }
  }
  }
  if(flag==0)
  { 
    cout<<"Path not exist";
    return;

  }
  
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
    cout<<"Enter source node";
    int src,des;
    cin>>src;
    cout<<"Enter destination node";
    cin>>des;
    dfs(adj,src,des,v);


}
