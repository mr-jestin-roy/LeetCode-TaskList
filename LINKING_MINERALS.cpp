#include "bits/stdc++.h"
using namespace std;
#define int long long


bool isValid(int m,int n,int row,int col){
    return m>=0 && m<row && n>=0 && n<col;
}

int dfs(int x,int y,vector<vector<int>> &arr, int& count){
    int m= arr.size(), n = arr[0].size();
    if(arr[x][y]==2) return 0;
    arr[x][y] = 2;
    int dir[3] = {-1,0,1};
    for(int dx  : dir){
        for(int dy : dir){
            if(dx ==0 && dy ==0) continue;
            if(isValid(x + dx,y + dy,m,n)){
                if(arr[x + dx][y + dy]==1){
                    count++;
                    dfs(x + dx,y + dy,arr, count);
                }
            }
        }
    }
    return count;
}

int maxTerritory(vector<vector<int>> &A) {
    int m = A.size(),n = A[0].size();
    int maximum = 0;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(A[i][j]==1){
                int count = 1;
                int val = dfs(i,j,A, count);
                maximum = max(maximum,val);
            }
        }
    }
    return maximum;
}


void solve(){
    int n,m;
	cin >>n>>m;
    auto grid = vector<vector<int>>(n,vector<int>(m,0));
    int x;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>grid[i][j];
        }
    }
    cout<<maxTerritory(grid)<<endl;
}
int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	int t=1;
	// cin>>t;
	while(t--){
        solve();
    }
	return 0;
}
