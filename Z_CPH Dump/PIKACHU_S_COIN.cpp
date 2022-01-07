#include "bits/stdc++.h"
using namespace std;
#define int long long


int countWaysToMakeChange(vector<int> &coins, int m, int value){
    int i, j, x, y; 
    int table[value+1][m];
    for (i=0; i<m; i++) 
        table[0][i] = 1; 
    for (i = 1; i < value+1; i++) { 
        for (j = 0; j < m; j++) { 
            
            x = (i-coins[j] >= 0)? table[i - coins[j]][j]: 0;
            
            y = (j >= 1)? table[i][j-1]: 0;
            
            table[i][j] = x + y;
        }
    }
    return table[value][m-1];
}



void solve(){
    int n,m;
	cin >>n>>m;
    vector<int> coins(m);
    for(int i=0;i<m;i++){
        cin>>coins[i];
    }
    cout<<countWaysToMakeChange(coins,m,n)<<endl;
    
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
