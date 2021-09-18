#include <bits/stdc++.h>
using namespace std;

struct cmp{
    bool operator()(const pair<int, int> &x, const pair<int, int> &y) const{
	    if(x.first != y.first)return x.first < y.first;
	    return x.second > y.second;
    }
};

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
	    cin >> a[i];
    }
    vector<int> ans(n);
    set<pair<int, int>, cmp> st;

    st.insert({a[0], 0});
    for(int i = 1, j = 1; i <= n; i++){
	    int id = st.rbegin()->second;
	    st.erase({a[id], id});
	    ans[id] = i;

	    if(j < n){
		    st.insert({a[j], j}); ++j;
	    }
	    if(j < n){
		    st.insert({a[j], j}); ++j;
	    }
    }
    for(int i = 0; i < n; i++){
	    if(i)cout << " ";
	    cout << ans[i];
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    for(int i = 0; i < t; i++){
	    if(i)cout << '\n';
	    solve();
    }

    return 0;
}
