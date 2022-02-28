// Author:: Jestin Roy
// Institution:: Mar Athanasius College of Engineering
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

bool can(int m,int s){
    return (s >= 0 && s <= 9 * m);
}
void solve()
{
   int m,s;
   cin >> m >> s;
   //base cases 
   if(m==1 && s==0){
       cout << 0 << " " << 0 << endl;
       return;
   }
   if(s==0 || s > 9*m){
       cout << -1 << " " << -1 << endl;
       return;
   }
    if(!can(m,s)){
        cout << "-1 -1";
        return;
    }


   int sum = s;
   string minn = "";

   for (int i = 0; i < m;i++){
       for (int d = 0; d < 10;d++){
           if((i >0 || d > 0 ||(m==1 && d==0)) &&  (can(m-i-1,sum - d)))
           {
               cout << d;
               //    minn += char('0' + d);
               sum -= d;
               break;
           }
       }
   }
   sum = s;
   cout << " ";
   //now maximum number
   for (int i = 0; i < m;i++){
       if(sum >= 9)
       {
           cout << 9;
           sum -= 9;
       }
       else{
           cout << sum;
           sum = 0; //reset the sum temp variable
       }
   }
}

int32_t main()
{
    fast;
    cout << fixed << setprecision(20);
    int t = 1;
    // cin >> t;
    for (int tt = 1; tt <= t; tt++)
    {
        // cout << "Case #" << tt << ": ";
        solve();
    }
}