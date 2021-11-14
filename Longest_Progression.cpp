#include <bits/stdc++.h>
#include <cstdio>
#include <iostream>
#include <vector>
using namespace std;
#define endl "\n"
#define mod 1000000007
#define rep(i,a,b)  for(int i=a;i<b;i++)
#define ll long long 
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL)
#define PI 3.14159265358979323846
#define MAX 1e15
template<typename T,typename T1>T amax(T &a,T1 b){if(b>a)a=b;return a;}
template<typename T,typename T1>T amin(T &a,T1 b){if(b<a)a=b;return a;}

void solve()
{
    
	int n;
	cin >> n;
	vector<int> a(n);
	for(int &x:a){
		cin >> x;
	}
	
	vector<int> cnt(n);
	vector<int> cntr(n);
	int c = 2;
	cnt[0] = 1;
	cnt[1] = 2;
	rep(i,2,n){
		if(a[i] - a[i-1] == a[i-1] - a[i-2]){
			c++;
		}
		else{
			c = 2;
		}
		cnt[i] = c;
	}
	
	c = 2;
	cntr[n-1] = 1;
	cntr[n-2] = 2;
	for(int i = n-3; i >= 0; i--){
		if(a[i] - a[i+1] == a[i+1] - a[i+2]){
			c++;
		}
		else{
			c = 2;
		}
		cntr[i] = c;
	}
	
	int ans = max(1+cntr[1],1+cnt[n-2]);
	rep(i,1,n-1){
		amax(ans,1+cntr[i+1]);
		amax(ans,1+cnt[i-1]);
		if((a[i-1] + a[i+1]) % 2){
			continue;
		}
		int d = (a[i+1] - a[i-1]) / 2;
		if(i <= 1 || a[i-1] - a[i-2] == d){
			amax(ans,2+cnt[i-1]);
		}
		if(i >= n-2 || a[i+2] - a[i+1] == d){
			amax(ans,2+cntr[i+1]);
		}
		if((i > 1 && a[i-1] - a[i-2] != d) || (i < n-2 && a[i+2] - a[i+1] != d)){
			continue;
		}
		int tmp = cntr[i+1] + cnt[i-1] + 1;
		amax(ans,tmp);
	}
	
	cout << ans;
	cout << "\n";
}

int32_t main()
{
    fast;
    int t = 1;
    cin >> t;
    for (int caseNum = 1; caseNum <= t; caseNum++)
    {
        cout << "Case #" << caseNum << ": ";
        solve();
    }
}