#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution {

public:
    bool checkForCycle(int s, int V, vector<int> adj[], vector<int>& visited)
    {
        vector<int> parent(V, -1);
     
        // Create a queue for BFS
        queue<pair<int,int>> q;  //stores the node & the previous
     
        visited[s] = true;
        q.push({s, -1});        //intiall condition
     
        while (!q.empty()) {

            int node = q.front().first;
            int par = q.front().second;
            q.pop();
                                        //traverse the adj nodes for the current node
            for (auto it : adj[node]) {
                if (!visited[it]) {
                    visited[it] = true;
                    q.push({it, node});
                }
                else if (par != it)
                    return true;
            }
            //if the loop ends reaches till here we know that the component doesn't have any 
            //cycle detected in it
        }
        return false;
    }
public:
	bool isCycle(int V, vector<int>adj[]){
        //cycle detection for BFS
	    vector<int> vis(V, 0); 
	    for(int i = 0;i<V;i++) {
	        if(!vis[i]) {
	            if(checkForCycle(i, V, adj, vis)) return true; 
	        }
	    }
	    
	    return false; 
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