#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
#define ppb pop_back
#define pf push_front
#define ppf pop_front
#define all(x) (x).begin(), (x).end()
#define uniq(v) (v).erase(unique(all(v)), (v).end())
#define sz(x) (int)((x).size())
#define fr first
#define sc second
#define pii pair<int, int>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define mem1(a) memset(a, -1, sizeof(a))
#define mem0(a) memset(a, 0, sizeof(a))
#define ppc __builtin_popcount
#define ppcll __builtin_popcountll

const long long INF = 1e18;
const int32_t M = 1e9 + 7;
const int32_t MM = 998244353;

const int N = 0;

void solve()
{
    int n;cin>>n;
    vector<vector<int>> adj(n);
    map<int,int> indegree;
    rep(i,0,n){
        int k;
        cin>>k;
        rep(j,0,k){
            int chapter;
            cin>>chapter;
            chapter--;
            adj[chapter].pb(i);
            indegree[i]++;
        }
    }
    queue<int> q;
    rep(i,0,n){
        if(indegree[i] == 0)    q.push(i);
    }
    int read =0;
    vector<int> graph(n,1);
    while(!q.empty()){
        read++;
        int node = q.front();
        q.pop();
        for(auto child: adj[node]){
            if(child > node)
                graph[child] = max(graph[child],graph[node]);
            else
                graph[child] = max(graph[child],1+graph[node]);
            
            indegree[child]--;
            if(indegree[child] == 0){
                q.push(child);
            }
        }
    }
    if(read != n)
        cout<<-1<<endl;
    else{
        int ans =0;
        for(auto node:graph)    ans = max(ans,node);
        
        cout<<ans<<endl;
    }
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
//freopen("input.txt", "r", stdin);
//freopen("output.txt", "w", stdout);
#ifdef SIEVE
    sieve();
#endif
#ifdef NCR
    init();
#endif
    int t = 1;
    cin >> t;
    while (t--)
        solve();
    return 0;
}

