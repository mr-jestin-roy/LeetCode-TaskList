#include "bits/stdc++.h"
using namespace std;
#define int               long long
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


void swap(string arr,int i, int j)
{
  char temp = arr[i];
  arr[i] = arr[j];
  arr[j] = temp;
}

void solve(){
    int n;
	cin >> n;
    int a[n][5];
    for(int i=0;i<n;i++){
        for(int j=0;j<5;j++){
            cin>>a[i][j];
        }
    }

	for(int i=0;i<n;i++){
        for(int j=1;j<5;j++){
            a[i][j] += a[i][j-1];
        }
    }
    vector<int> res(n);

	for(int i=0;i<n;i++){
        res[i] = a[i][4];
    }
    int x = *min_element(all(res));
    int ind = min_element(all(res)) - res.begin();
    int cnt = count(all(res),x);
    for(int i=0;i<n;i++)
        cout<<res[i]<<" ";
    cout<<endl;
    // if(cnt > 1){
    //     cout<<-1<<endl;
    // }
    // else if(cnt ==1){
    //     cout<<ind+1<<endl;
    // }
}
signed main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	#ifdef SIEVE
		sieve();
	#endif
	#ifdef NCR
		init();
	#endif
	int t=1;
	cin>>t;
	while(t--) solve();
	return 0;
}
