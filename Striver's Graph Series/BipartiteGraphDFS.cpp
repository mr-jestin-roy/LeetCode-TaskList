#include <bits/stdc++.h>
using namespace std;
//Write code below here
bool bipartiteDfs(int node,vector<int> adj[],int color[]){
   if(color[node] == -1) color[node] =1;


   for(auto it: adj[node]){
       if(color[it] == -1){
           if(!bipartiteDfs(it,adj,color)){
               return false; //false detected in dfs traversal of nodes
           }
           
       }
       else if(color[it]==color[node])//NOT BIPARTITE graph
            return false;//if the adj node is of same color as the node
   }
    return true; //passed all edge cases
}

bool checkBipartite(vector<int> adj[],int n){
    int color[n];
    memset(color, -1, sizeof(color));
    for (int i = 0; i < n;i++){
        if(color[i] == -1){
            if(!bipartiteBfs(i,adj,color))
                return false; // we found a loop at one such node
        }       //graph is not bipartite
    }
    return true; //the entire graph is Bipartite
}

// C++AdjacencyListRepresentation
int main() {
    int n, m;
    cin >> n >> m; 
    
    // declare the adjacent list 
    vector<int> adj[n]; 
    
    // take edges as input 
    for(int i = 0;i<m;i++) {
        int u, v; 
        cin >> u >> v;
        adj[u].push_back(v); 
        adj[v].push_back(u); 
    }
    if(checkBipartite(adj,n)){
        cout<<"YES";
    }
    else{
        cout << "NO";
    }
    return 0;
}