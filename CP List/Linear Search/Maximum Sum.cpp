

#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
	ll n;cin>>n;
	ll a[n];
	ll k=0,sum =0;
	
	for(int i=0;i<n;i++){
		cin>>a[i];
	}	
	sort(a,a+n);
	for(int i=n-1;i>=0;i--){
		if(a[i]>=0){
			sum += a[i];k++;
		}
		else{
			break;
		}
	}
	if(k)
		cout<<sum<<" "<<k<<endl;
	else
		cout<<a[n-1]<<" "<<1<<endl;
}
