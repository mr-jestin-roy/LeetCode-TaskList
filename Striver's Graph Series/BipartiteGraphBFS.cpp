#include <bits/stdc++.h>
using namespace std;
//Write code below here
bool bipartiteBfs(int src,vector<int> adj[],int color[]){
    queue<int> q;
    q.push(src); //we push the current node
    color[src] = 1; //color the node with intial color
    while(!q.empty()){
        int node = q.front();
        q.pop();

        for(auto it : adj[node]){
            if(color[it] == -1){
                color[it] = 1 - color[node]; //this is to switch the color,if it is 1 - 1 = 0
                q.push(it); // 1-0 = 1 which is a color too
            }
            else if(color[it] == color[node]){
                return false; //if the adj & current node have the same color 
                //graph is not BIPARTITE
            }
        }
    }
    return true;
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