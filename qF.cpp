#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <string>
#include <functional>
using namespace std;

#define int long long

const int INF = 1e18;
const int dx[] = {1, 0, -1, 0, 1, 1, -1, -1};
const int dy[] = {0, 1, 0, -1, 1, -1, 1, -1};

// Find the minimum max-value path from (sx,sy) to (tx,ty)
int minMaxPath(const vector<vector<int> >& grid, int sx, int sy, int tx, int ty) {
    int n = grid.size();
    vector<vector<int> > dist(n, vector<int>(n, INF));
    
    typedef pair<int, int> pii;
    priority_queue<pair<int, pii>, vector<pair<int, pii> >, greater<pair<int, pii> > > pq;
    
    dist[sx][sy] = grid[sx][sy];
    pq.push(make_pair(dist[sx][sy], make_pair(sx, sy)));
    
    while (!pq.empty()) {
        pair<int, pii> top = pq.top();
        int cost = top.first;
        pii pos = top.second;
        pq.pop();
        
        int x = pos.first, y = pos.second;
        if (cost > dist[x][y]) continue;
        
        for (int d = 0; d < 4; d++) {
            int nx = x + dx[d], ny = y + dy[d];
            if (nx < 0 || nx >= n || ny < 0 || ny >= n) continue;
            
            int newCost = max(cost, grid[nx][ny]);
            if (newCost < dist[nx][ny]) {
                dist[nx][ny] = newCost;
                pq.push(make_pair(newCost, make_pair(nx, ny)));
            }
        }
    }
    
    return dist[tx][ty];
}

// Find a valid path from (sx,sy) to (tx,ty) with max cost
vector<vector<int> > findPath(const vector<vector<int> >& grid, int sx, int sy, int tx, int ty, int maxCost) {
    int n = grid.size();
    vector<vector<int> > path(n, vector<int>(n, 0));
    vector<vector<bool> > visited(n, vector<bool>(n, false));
    
    bool dfs(int x, int y);
    
    function<bool(int,int)> dfs = [&](int x, int y) -> bool {
        if (x == tx && y == ty) {
            path[x][y] = 1;
            return true;
        }
        
        visited[x][y] = true;
        path[x][y] = 1;
        
        for (int d = 0; d < 4; d++) {
            int nx = x + dx[d], ny = y + dy[d];
            if (nx < 0 || nx >= n || ny < 0 || ny >= n) continue;
            if (visited[nx][ny]) continue;
            if (grid[nx][ny] > maxCost) continue;
            
            if (dfs(nx, ny)) {
                return true;
            }
        }
        
        path[x][y] = 0;
        return false;
    };
    
    dfs(sx, sy);
    return path;
}

// Check if we can achieve target cost with k operations
bool canAchieve(const vector<vector<int> >& grid, const vector<string>& colors, 
                const vector<vector<int> >& moufPath, int target, int k, int n, int exitRow) {
    vector<vector<int> > costs(n, vector<int>(n));
    
    // Calculate upgrade costs
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (grid[i][j] >= target) {
                costs[i][j] = 0;
            } else if (colors[i][j] == '1' && (!moufPath[i][j] || grid[i][j] >= target)) {
                costs[i][j] = target - grid[i][j];
            } else {
                costs[i][j] = INF;
            }
        }
    }
    
    // Check direct costs
    if (costs[0][0] <= k) return true;
    if (costs[exitRow][n-1] <= k) return true;
    
    // Dijkstra to find min-cost path to exit
    vector<vector<int> > dp(n, vector<int>(n, INF));
    typedef pair<int, int> pii;
    priority_queue<pair<int, pii>, vector<pair<int, pii> >, greater<pair<int, pii> > > pq;
    
    // Initialize edge points
    for (int j = 1; j < n; j++) {
        dp[0][j] = costs[0][j];
        pq.push(make_pair(dp[0][j], make_pair(0, j)));
    }
    
    for (int i = 1; i < n; i++) {
        dp[i][0] = costs[i][0];
        pq.push(make_pair(dp[i][0], make_pair(i, 0)));
    }
    
    for (int i = 0; i < exitRow; i++) {
        dp[i][n-1] = costs[i][n-1];
        pq.push(make_pair(dp[i][n-1], make_pair(i, n-1)));
    }
    
    while (!pq.empty()) {
        pair<int, pii> top = pq.top();
        int cost = top.first;
        pii pos = top.second;
        pq.pop();
        
        int x = pos.first, y = pos.second;
        if (cost > dp[x][y]) continue;
        
        for (int d = 0; d < 8; d++) {
            int nx = x + dx[d], ny = y + dy[d];
            if (nx < 0 || nx >= n || ny < 0 || ny >= n) continue;
            
            int newCost = cost + costs[nx][ny];
            if (newCost < dp[nx][ny]) {
                dp[nx][ny] = newCost;
                pq.push(make_pair(newCost, make_pair(nx, ny)));
            }
        }
    }
    
    // Check if any exit point is reachable
    for (int i = 0; i < n; i++) {
        if (dp[n-1][i] <= k) return true;
    }
    
    for (int i = exitRow+1; i < n; i++) {
        if (dp[i][n-1] <= k) return true;
    }
    
    for (int i = 1; i < n; i++) {
        if (dp[i][0] <= k) return true;
    }
    
    return false;
}

void solve() {
    int n, r, k;
    cin >> n >> r >> k;
    r--;  // Convert to 0-indexing
    
    // Read grid values
    vector<vector<int> > grid(n, vector<int>(n));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> grid[i][j];
        }
    }
    
    // Read colors
    vector<string> colors(n);
    for (int i = 0; i < n; i++) {
        cin >> colors[i];
    }
    
    // Reverse grid for easier processing
    reverse(grid.begin(), grid.end());
    reverse(colors.begin(), colors.end());
    r = n - 1 - r;
    
    // Find min-max path costs
    int moufCost = minMaxPath(grid, n-1, 0, r, n-1);
    int fouadCost = minMaxPath(grid, 0, 0, r, n-1);
    
    // Find Mouf's path
    vector<vector<int> > moufPath = findPath(grid, n-1, 0, r, n-1, moufCost);
    
    // Binary search for max achievable cost
    int left = fouadCost;
    int right = 1e9;
    int result = fouadCost;
    
    while (left <= right) {
        int mid = left + (right - left) / 2;
        
        if (canAchieve(grid, colors, moufPath, mid, k, n, r)) {
            result = mid;
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    
    cout << moufCost << " " << result << endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}
