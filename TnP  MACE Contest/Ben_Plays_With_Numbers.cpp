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

const long long INF=1e18;
const int32_t M=1e9+7;
const int32_t MM=998244353;

const int N=1e5+5;


void solve(){
	int n,k;
	cin >>n>>k;
    vector<int> a(n),b(n);
	rep(i,0,n){
		cin >> a[i];
	}
    rep(i,0,n){
        cin>>b[i];
    }

	int diff =0;
	int ans = 0;
    int currProd=0,temp;
	rep(i,0,n){
		currProd = a[i]*b[i];
        ans += currProd;


        if(currProd<0 && a[i]<0)
            temp = (a[i]-2*k)*b[i];
        else if(currProd <0 && b[i])
            temp = (a[i]+2*k)*b[i];
        else if(currProd>0 && a[i]<0)
            temp = (a[i]+2*k)*b[i];
        else if(currProd >0 && a[i]>0)
            temp = (a[i]-2*k)*b[i];

        int currDiff = abs(currProd-temp);
        if(currDiff>diff){  diff = currDiff;    }
    }
    ans = ans - diff;
	cout << ans << "\n";
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
