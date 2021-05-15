#include <bits/stdc++.h>

using namespace std;
void solve()
{
	int n,k1,k2;	cin>>n>>k1>>k2;
	int w,b;
	cin>>w>>b;
	int check = k1+k2;
	if(2*w<=check && 2*b<=2*n-check)
	{
		cout<<"YES"<<endl;
	}
	else
		cout<<"NO"<<endl;
}
int main(){
	cin.tie(0);
	cout.tie(0);
	ios::sync_with_stdio(0);

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int t=1;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}