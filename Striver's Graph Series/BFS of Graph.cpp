#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL)
#define int long long int
#define mod 998244353
#define endl "\n"0
#define inf 1e9 + 1

vector<int>bfsOfGraph(int V,vector<int> adj[]){
    vector<int> bfs;            //bfs traversal vector
    vector <int>  vis(V + 1, 0); //visted array

    for (int i = 1; i <= V;i++){
        if(!vis[i]){    //if not visted, push to the queue
// BFS ALOGRITHM IS WRITTEN FROM HERE ON
            queue<int> q;
            q.push(i);
            vis[i] = 1; //marked it as visited
            while(!q.empty()){
                int node = q.front();
                q.pop();               //for bfs ,we pop the current node & push to the ans array
                bfs.push_back(node);

                for (auto it: adj[node]){ //go through the same proceess
                    if(!vis[it]){ //for its adjacency list 
                        q.push(it);
                        vis[it] = 1;
                    }
                }
            }
        }
    }
    return bfs; // return the bfs traversed vector
}

int32_t main()
{
    fast;
    cout << fixed << setprecision(20);
    int t = 1;
    cin >> t;
    for (int tt = 1; tt <= t; tt++)
    {
        // cout << "Case #" << tt << ": ";
        int n;
        cin >> n;

        
    }
}

