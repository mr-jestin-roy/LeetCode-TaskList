#include<bits/stdc++.h>
using namespace std;

 // o- based indexing code


class Solution {

public:
    bool checkForCycle(int node, int parent, vector<int> &vis, vector<int> adj[]) {
        vis[node] = 1; 
        for(auto it: adj[node]) {
            if(!vis[it]) { //dfs only if the node is unvisited
                if(checkForCycle(it, node, vis, adj)) //if inner dfs return true for cycle detection
                    return true; 
            }
            else if(it!=parent) //if the node is visited 
                return true; //& the dfs node != parent/prev node of the current node
        }
        
        return false; //No cycle is detected
    }
public:
	bool isCycle(int V, vector<int>adj[]){
	    vector<int> vis(V+1, 0); 
	    for(int i = 0;i<V;i++) {//for each node in the graph we run the loop
	        if(!vis[i]) {//if not visited do DFS
	            if(checkForCycle(i, -1, vis, adj)) return true; //<node,paren> = <i,-1>
                //default setting for start of each component 
	        }
	    }
	    
	    return false; //NO CYCLE DETECTED
	}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int V, E;
		cin >> V >> E;
		vector<int>adj[V];
		for(int i = 0; i < E; i++){
			int u, v;
			cin >> u >> v;
			adj[u].push_back(v);
			adj[v].push_back(u);
		}
		Solution obj;
		bool ans = obj.isCycle(V, adj);
		if(ans)
			cout << "1\n";
		else cout << "0\n";
	}
	return 0;
}  // } Driver Code Ends