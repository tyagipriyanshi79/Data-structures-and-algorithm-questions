#include<iostream>
using namespace std;
// Adjacency Matrix representation
 //the adjacency matrix initially 0
//int count = 0;
const int n  = 1e3+10;
int vertArr[n][n];

int main() {
   int n,m;
   cin>>n>>m;
   
   for(int i = 0; i < m; i++){
        int u , v ;
        cin >> u >> v ;
        vertArr[u][v] = 1 ;
          vertArr[v][u] = 1 ;
    }
  int i, j;
   for(i = 0; i < m; i++) {
      for(j = 0; j < m; j++) {
         cout << vertArr[i][j] << " ";
      }
      cout << endl;
   }

    /*vector<int> adj[n+1];

    for(int i=0; i<m; i++)
    {
        int u,v;
        cin>>u>>v;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    //weighted graph
    /*vector<pair<int,int>> adj[n+1];

    for(int i=0; i<m; i++)
    {
        int u,v, wt;
        cin>>u>>v >> wt;

        adj[u].push_back({v,wt});
        adj[v].push_back({u,wt});
    }*/

    return 0;
}