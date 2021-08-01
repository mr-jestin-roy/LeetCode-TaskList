#include "bits/stdc++.h"
using namespace std;
// #define int               long long
#define pb                push_back
#define ppb               pop_back
#define pf                push_front
#define ppf               pop_front
#define all(x)            (x).begin(),(x).end()
#define uniq(v)           (v).erase(unique(all(v)),(v).end())
#define sz(x)             (int)((x).size())
#define fr                first
#define sc                second
#define pii               pair<int,int>
#define rep(i,a,b)        for(int i=a;i<b;i++)
#define mem1(a)           memset(a,-1,sizeof(a))
#define mem0(a)           memset(a,0,sizeof(a))
#define ppc               __builtin_popcount
#define ppcll             __builtin_popcountll

template<typename T1,typename T2>istream& operator>>(istream& in,pair<T1,T2> &a){in>>a.fr>>a.sc;return in;}
template<typename T1,typename T2>ostream& operator<<(ostream& out,pair<T1,T2> a){out<<a.fr<<" "<<a.sc;return out;}
template<typename T,typename T1>T amax(T &a,T1 b){if(b>a)a=b;return a;}
template<typename T,typename T1>T amin(T &a,T1 b){if(b<a)a=b;return a;}

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


// int maxTerritory(vector<vector<int>> &grid,int i,int j){
//     if( i >= 0 && i < grid.size() && j >= 0 && j < grid[0].size() && grid[i][j] == 1){
//         grid[i][j]=0;
//         return 1+ maxTerritory(grid,i+1,j) + maxTerritory(grid,i-1,j) + maxTerritory(grid,i,j+1) + maxTerritory(grid,i,j-1)+maxTerritory(grid,i+1,j+1) + maxTerritory(grid,i-1,j-1) + maxTerritory(grid,i+1,j-1) + maxTerritory(grid,i-1,j+1);
//     }
// }

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
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);

	int t=1;
	// cin>>t;
	while(t--){
        solve();
    }
	return 0;
}
