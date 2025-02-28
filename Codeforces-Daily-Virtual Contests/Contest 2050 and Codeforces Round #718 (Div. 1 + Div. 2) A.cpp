#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
typedef unsigned long long int uli;
typedef long double Lf;
typedef pair<int, int> pii;
typedef vector<int> vi;
#define fastIO  std::ios::sync_with_stdio(false);cin.tie(NULL)
#define mod 1000000007
#define N 200004
#define NN 2005
#define SZ(x) ((int) (x).size())
#define all(x) (x).begin(), (x).end()
#define loop(i,s,n) for(int i=(s);i<(n);i++)
#define loopr(i,n,s) for(int i=(n)-1;i>=(s);i--)
#define pb push_back
#define o2(a,b) cout<<(a)<<" "<<(b)<<endl
#define o3(a,b,c) cout<<(a)<<" "<<(b)<<" "<<(c)<<endl
#define o4(a,b,c,d) cout<<(a)<<" "<<(b)<<" "<<(c)<<" "<<(d)<<endl
#define cl cout<<endl
#define r0 return 0
#define e0 exit(0)
#define x first
#define y second
inline lli modadd(lli n, lli m, lli p = mod) {
    return ((n + m) % p + p) % p;
}
lli modadd(initializer_list<lli> v, lli p = mod) {
    lli res = 0;
    for (auto u : v) {
        res = modadd(res, u, p);
    }
    return res;
}

inline lli modsub(lli n, lli m, lli p = mod) {
    return ((n - m + p) % p + p) % p;
}

inline lli modpro(lli n, lli m, lli p = mod) {
    return (((n % p) * (m % p)) % p + p) % p;
}

lli modpro(initializer_list<lli> v, lli p = mod) {
    lli res = 1;
    for (auto u : v) {
        res = modpro(res, u, p);
    }
    return res;
}


uli powe(lli x, lli y) {
    uli res = 1;
    while (y > 0) {
        if (y & 1)
            res = res * x;
        y = y >> 1;
        x = x * x;
    }
    return res;
}

lli modpow(lli x, lli y, lli p = mod) {
    lli res = 1;
    while (y > 0) {
        if (y & 1)
            res = modpro(res , x, p);
        y = y >> 1;
        x = modpro(x , x, p);
    }
    return res;
}

inline lli modInverse(lli n, lli p = mod)
{
    if (n == 1) return 1;
    return modpow(n, p - 2, p);
}

inline lli moddiv(lli n, lli m, lli p = mod) {
    return modpro(n, modInverse(m, p), p);
}

inline lli modadd3(lli x, lli y, lli z, lli p = mod) {
    return modadd(modadd(x, y, p), z, p);
}

inline lli modadd4(lli x, lli y, lli z, lli w, lli p = mod) {
    return modadd(modadd(x, y, p), modadd(z, w, p), p);
}

inline lli modnCr(lli fac[], int n, int r, lli p = mod)
{
    if (r == 0) return 1;
    return modpro(fac[n], modInverse(modpro(fac[r], fac[n - r], p), p), p);
}


template <typename T>
void printArr(T *arr, int s, int n) {
    for (int i = s; i < n; i++) {

        cout << arr[i] << " ";
    } cout << endl;
}

// template<class X, class Y, class Z>
// struct triple {
//    X x;
//    Y y;
//    Z z;

//     friend bool operator<(triple a, triple b)
//    {
//        if(a.x!=b.x) return a.x<b.x;
//        else if(a.y!=b.y) return a.y<b.y;
//        else return a.z<=b.z;
//    }
// };


// template<class X, class Y, class Z, class W>
// class quad {
//    public:
//    X x;
//    Y y;
//    Z z;
//    W w;

//     friend bool operator<(quad a, quad b)
//    {
//        if(a.x!=b.x) return a.x<b.x;
//        else if(a.y!=b.y) return a.y<b.y;
//        else if(a.z!=b.z)return a.z<b.z;
//        else return a.w<b.w;
//    }
// };


//
//uli choose(uli n, uli k){
//uli res = 1;
//
//    // Since C(n, k) = C(n, n-k)
//    if ( k > n - k )
//        k = n - k;
//
//    // Calculate value of
//    // [n * (n-1) *---* (n-k+1)] / [k * (k-1) *----* 1]
//    for (uli i = 0; i < k; ++i)
//    {
//        res *= (n - i);
//        res /= (i + 1);
//    }
//
//    return res;
//}
//

//
//  vector<vector<pii>> adj;
//   //vector<int> dist;
//   vector<int> d;
////   vector<bool> visited;
////     vector<int> pa;
//   //queue<int> q;
//
//  class Graph{
//
//   public:
//      int V;
//
//  Graph(int V){
//      this->V = V;
//      adj.resize(V);
////        visited.resize(V);
//      //color.resize(V);
//      //dist.resize(V);
//        d.resize(V);
//     //// dist.resize(V);
////     pa.resize(V);
//
//  }
//
//  ~Graph(){
//    adj.clear();
//    //visited.clear();
//   // color.clear();
//   // dist.clear();
////    pa.clear();
//    //dist.clear();
////      visited.clear();
//d.clear();
//
//
//  }
//
//
//  void addEdge(int a, int b)
//  {
//      adj[a].pb(b);
//      adj[b].pb(a);
//      //adj[b].pb({a,in});
//  }
//
// //  void dfs(int x){
// //    //  color[x]=1;
// //   visited[x]=1;
// //      for(auto u: adj[x]){
// //          if(visited[u]) continue;
// //
// //          dfs(u);
// //      }
// //
// //  }
// //
// //
// //
// //
// //
//  // void dfsTree(int x, int p){
//  //     for(auto u: adj[x]){
//  //         if(u==p) {continue;}
//  //         dfsTree(u,x);
//  //     }
//  // }
//
//
//void dijkstra(int s) {
//    d.assign(n, INF);
//    d[s] = 0;
//    set<pair<int, int>> q;
//    q.insert({0, s});
//    while (!q.empty()) {
//        int v = q.begin()->second;
//        q.erase(q.begin());
//        for (auto edge : adj[v]) {
//            int to = edge.first;
//            int len = edge.second;
//            if (d[v] + len < d[to]) {
//                q.erase({d[to], to});
//                d[to] = d[v] + len;
//                q.insert({d[to], to});
//            }
//        }
//    }
//}
//
//
////  void bfs(int x){
////      queue<int> q;
////      visited[x]=1;
////      q.push(x);
////      //dist[x]=0;
////      while(!q.empty()){
////          int s = q.front();
////          q.pop();
////
////          for(auto u : adj[s]){
////
////              if(visited[u]) continue;
////              pa[u]=s;
////              visited[u]=1;
////              //dist[u.x]=dist[s]+1;
////              q.push(u);
////          }
////      }
////  }
//
// //pair<int,int> farthest(int start){
// //    vector<int> dist(V,INT_MAX);
// //
// //    q.push(start);
// //    dist[start]=0;
// //    while(!q.empty()){
// //        int u = q.front();
// //        q.pop();
// //        for(int child: adj[u]){
// //            //if(keep[child])
// //            if(dist[child] > dist[u]+1) {
// //                dist[child] = dist[u]+1;
// //                q.push(child);
// //            }
// //        }
// //    }
// //    int big=-1,mi=-1;
// //    for(int i=1;i<n+1;i++){
// //        //if(keep[i])
// //        {
// //            if(dist[i]>big){
// //                big=dist[i];mi=i;
// //            }
// //        }
// //    }
// //    return make_pair(big,mi);
// //}
//
//
// //  int connectedcomponents(int n){
// //      int ans=0;
// //      loop(i,1,n+1){
// //          if(!visited[i]){
// //              ans++;
// //              dfs(i);
// //          }
// //
// //      }
// //      return ans;
// //  }
//
//  };


//template <typename T>
//T findpowerfactorial(T n,T p)
//{
//    T x = 0;
//    while (n)
//    {
//        n /= p;
//        x += n;
//    }
//    return x;
//}
//

// int spf[N];
// void sieve2(int n)
// {
//     for (int i=2; i<=n; i++)
//         spf[i] = i;
//     for (int i=2; i*i<=n; i++)
//         if (spf[i] == i)
//             for (int j=i*i; j<=n; j+=i)
//                 if (spf[j]==j) spf[j] = i;
// }

// vector<pair<lli,int>> v;
// void primeFactors(lli n)
// {
//    v.clear();
//    int c=0;
//    while (n % 2 == 0)
//    {
//        n = n/2;
//        c++;
//    }
//    if(c>0) v.pb({2,c});


//    for (lli i = 3; i*i <= n; i = i + 2)
//    {   c=0;

//        while (n % i == 0)
//        {
//            n = n/i;
//            c++;
//        }
//        if(c>0)v.pb({i,c});

//    }
//    if (n > 2)
//        v.pb({n,1});
// }


// vector<int> v;
// int primeFactor(int n){
//     int rr = 1;
//     while(n>1){
//         int x = spf[n];
//         int c=0;
//         while(n%x==0){
//             c++;
//             n/=x;
//         }
//         if(c%2) rr*=x;
//     }
//     return rr;
// }

// lli fac_[N];
// void fac_init(int n, int m = mod){
//    fac_[0]=1;
//    loop(i,1,n+1) fac_[i]=modpro(fac_[i-1],i, m);
// }

/*BITMASK
for( int inum = 0 ; inum < ( 1 << n ) ; ++ inum ) {
     for ( int pos = 0; pos < n ; ++pos ) {
         if (  inum & ( 1 << pos )  ){
              results[inum] += s [pos] ; //DO SOMETHING
         }
     }
}
*/

// int spf[N];
// void sieve2(int n) {
//     for (int i=1; i<=n; i++)
//         spf[i] = i;
//     for (int i=2; i*i<=n; i++)
//         if (spf[i] == i)
//             for (int j=i*i; j<=n; j+=i)
//                 if (spf[j]==j) spf[j] = i;
// }
// vector<pii> temp;
// void primeFactor(int n){
//     temp.clear();
//     while(n>1){
//         int x = spf[n];
//         int c=0;
//         while(n%x==0){
//             c++;
//             n/=x;
//         }
//         temp.pb({x,c});
//     }
// }
int main() {
    fastIO;
    int test = 1;
    cin >> test;
    loop(test2, 1, test + 1) {
        lli n;
        cin >> n;
        if (n % 2050) {
            cout << -1 << endl;
            continue;
        }
        n /= 2050;
        int c = 0;
        while (n) {
            c += (n % 10);
            n /= 10;
        }
        cout << c << endl;

    }
    return 0;
}