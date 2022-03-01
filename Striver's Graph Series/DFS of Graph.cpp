#include <bits/stdc++.h>
using namespace std;
//Write code below here
void dfs(int node, vector<int> &vis, vector<int> adj[],vector<int> &storeDfs){
   //NOW WE WRITE THE RECURSIVE DFS FUNCTION
    storeDfs.push_back(node);
    vis[node] = 1; //for each node we visit it & then its adjacency list completely
    for(auto it : adj[node]){
        if(!vis[it]){
            dfs(it, vis, adj, storeDfs);
        }
    }
}
vector<int>dfsOfGraph(int V,vector<int> adj[]){
    vector<int> storeDfs;
    vector<int> vis(V + 1, 0);
    for (int i = 0; i <= V;i++){
        if(!vis[i]){
            dfs(i, vis, adj, storeDfs);
        }
    }
}


// C++AdjacencyListRepresentation
int main() {
    int n, m;
    cin >> n >> m; 
    
    // declare the adjacent matrix 
    vector<int> adj[n+1]; 
    
    // take edges as input 
    for(int i = 0;i<m;i++) {
        int u, v; 
        cin >> u >> v;
        adj[u].push_back(v); 
        adj[v].push_back(u); 
    }
    return 0;
}