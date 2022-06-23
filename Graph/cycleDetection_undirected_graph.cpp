#include<bits/stdc++.h>
using namespace std;


bool isCycleBFS(int src,  unordered_map<int , bool> &vis,unordered_map<int, set<int>> &adj)
{
    unordered_map<int,int> parent;
    parent[src] = -1;
    vis[src] = 1;
    queue<int> q;
    q.push(src);
    while(!q.empty()){
        int front = q.front();
        q.pop();
        for(auto neighbour : adj[front]){
            if(vis[neighbour]== true && neighbour != parent[front]){
                return true;
            }
            else if(!vis[neighbour]){
                q.push(neighbour);
                vis[neighbour] = 1;
                parent[neighbour] = front;
            }
        }
    }
    return false;
}
bool isCycleDFS(int node,int parent,  unordered_map<int , bool> &vis,unordered_map<int, set<int>> &adj){
    vis[node] = true;
    for(auto neighbour: adj[node]){
        if(!vis[neighbour]){
            bool cycleDetected = isCycleDFS(neighbour, node, vis, adj);
            if(cycleDetected)
                return true;
        }
        else if(neighbour!=parent){
            return true;
        }
    }
    return false;
}
string cycleDetection (vector<vector<int>>& edges, int n, int m)
{
    unordered_map<int, set<int>> adj;
    unordered_map<int , bool> vis;
    for(int i=0; i<m; i++){
        int u = edges[i][0];
        int v = edges[i][1];
        
        adj[u].insert(v);
        adj[v].insert(u);
    }
    
    for(int i=0; i<n; i++){
        if(!vis[i])
        {
            bool ans = isCycleDFS(i,-1, vis, adj);
            if(ans==1)
                return "Yes";
        }
    }
    return "No";
}
