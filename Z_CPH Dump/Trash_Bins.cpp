#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define mod 1000000007
#define int long long int
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL)
#define PI 3.14159265358979323846
#define MAX 1e15

int cntZeroes(string str, int n) {
   int sum = 0;
   int len = 0;
//    int minInd = INT_MAX;
   int prefix = 0, suffix = 0;
   for (int i = 0; str[i] == '0'; ++i) prefix++;
   for (int i = n - 1; str[i] == '0'; --i) suffix++;

   for (int i = 0; i < n; ++i) {
      if (str[i] == '0'){
          len++;
      } 
      else{
          if(len == n){
              return 0;
          }
          int x = len/2;
          sum += x*(x+1);
          if(len%2!=0)
            sum += x/2 + 1;
          len = 0;
      }
   }
     sum += (prefix*(prefix+1))/2;
    sum += (suffix*(suffix+1))/2;


   return sum;
}

void solve()
{
    int n;
    cin>>n;
    string s; cin>>s;
    int res = cntZeroes(s,n);
    cout<<res<<endl;
}

int32_t main()
{
    fast;
    int t = 1;
    cin >> t;
    for (int caseNum = 1; caseNum <= t; caseNum++)
    {
        cout << "Case #" << caseNum << ": ";
        solve();
    }
}

