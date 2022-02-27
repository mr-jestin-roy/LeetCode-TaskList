#include <bits/stdc++.h>
using namespace std;
// #define int long long
#define pb push_back
#define ppb pop_back
#define pf push_front
#define ppf pop_front
#define all(x) (x).begin(), (x).end()
#define uniq(v) (v).erase(unique(all(v)), (v).end())
#define sz(x) (int)((x).size())
#define fr first
#define sc second
#define pii pair<int, int>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL)
#define mod 998244353
#define endl "\n"
#define inf 1e15

bool is_perfect_square(long long int n){
    long long int root(round(sqrt(n)));
    return n == root * root;
}
 //includes SIEVE OF ERATOSTHENES
bool prime[1000001]; 
void sieve(){ 
  	int n = 1000000;
    memset(prime, true, sizeof(prime)); 
  	prime[0]=prime[1]=false;
    for (int p=2; p*p<=n; p++)
        if (prime[p] == true) 
            for (int i=p*p; i<=n; i += p) 
                prime[i] = false;
 }


int32_t main()
{
    fast;
    cout << fixed << setprecision(20);
    sieve();

    //PRE COMPUTING ENDS HERE
    //main code
    long long int n,x;
    cin>>n;

    while(n--){
        
        cin >> x;
        if(is_perfect_square(x) && prime[(int)round(sqrt(x))]){
            //means we found it in the set
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }

}