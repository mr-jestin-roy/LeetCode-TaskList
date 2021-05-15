#include <bits/stdc++.h>

using namespace std;
void solve()
{
	int n,k1,k2;	cin>>n>>k1>>k2;
	int w,b;
	cin>>w>>b;
	if(k1+k2 < 2){
		cout<<"NO"<<endl;
	}
	else if(w<=(k1+k2/2))
	{
		cout<<"YES"<<endl;
	}
	else
		cout<<"YES"<<endl;
}
int main(){
	int t=1;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}