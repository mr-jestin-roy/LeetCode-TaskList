#include <iostream>

using namespace std;

int main() {
	int n,m; cin>>n>>m;
	int a[n];
	int ans = -1;
	for(int i=0;i<n;i++){
		cin>>a[i];
		if(a[i] == m)
			ans = i+1;
	}	
	cout<<ans<<endl;

}
