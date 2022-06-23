#include<bits/stdc++.h>
using namespace std;
void prepareAdj(unordered_map<int, set<int>>&adjList, vector<vector<int>> &edges)
{
    for(int i=0; i<edges.size(); i++)
    {
        int u = edges[i][0];
        int v = edges[i][1];
        
        adjList[u].insert(v);
        adjList[v].insert(u);
    }
}

void dfs(int node, unordered_map<int, bool> &vis,unordered_map<int, set<int>>&adjList, vector<int> &temp){
    temp.push_back(node);
    vis[node] = true;
    
    for(auto i : adjList[node]){
        if(!vis[i]){
            dfs(i,vis,adjList, temp);
        }
    }
}
vector<vector<int>> depthFirstSearch(int V, int E, vector<vector<int>> &edges)
{
    unordered_map<int, set<int>>adjList;
    vector<vector<int>> ans;
    unordered_map<int, bool> vis;
    prepareAdj(adjList, edges);
    for(int i=0; i<V; i++){
        if(!vis[i])
        {
            vector<int>temp;
            dfs(i,vis,adjList, temp);
            ans.push_back(temp);
        }
    }
    
    return ans;
    // Write your code here
}