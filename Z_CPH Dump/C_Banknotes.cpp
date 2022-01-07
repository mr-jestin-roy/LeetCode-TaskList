#include<bits/stdc++.h>

#define fi first
#define se second
#define mp make_pair
#define pb push_back

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;

template<typename T> bool chkmax(T &x,T y){return x<y?x=y,1:0;}
template<typename T> bool chkmin(T &x,T y){return x>y?x=y,1:0;}

int readint(){
	int x=0,f=1; char ch=getchar();
	while(ch<'0'||ch>'9'){if(ch=='-')f=-1;ch=getchar();}
	while(ch>='0'&&ch<='9'){x=x*10+ch-'0';ch=getchar();}
	return x*f;
}

ll pw[20];
int n,k;
int a[15];

int main(){
	pw[0]=1;
	for(int i=1;i<=18;i++) pw[i]=pw[i-1]*10;
	int T=readint();
	while(T--){
		n=readint(); k=readint()+1;
		for(int i=1;i<=n;i++) a[i]=readint();
		a[n+1]=a[n]+18;
		ll ans=0,rem=k;
		for(int i=1;i<=n;i++){
			if(pw[a[i+1]-a[i]]-1>=rem){
				ans+=rem*pw[a[i]];
				rem=0;
			}
			else ans+=(pw[a[i+1]-a[i]]-1)*pw[a[i]],rem-=pw[a[i+1]-a[i]]-1;
		}
		printf("%lld\n",ans);
	}
	return 0;
}