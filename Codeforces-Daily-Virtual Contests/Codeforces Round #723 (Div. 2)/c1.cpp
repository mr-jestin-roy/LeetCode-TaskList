#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define mod 1000000007
#define int long long int
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL)
#define PI 3.14159265358979323846
#define endl "\n"

// ANOTHER METHOD USING PRIORITY QUEUE
void solve(){
    int N;
    cin >> N;
    priority_queue<int, vector<int>, greater<int>> pq;
    int64_t sum = 0;
    int potions = 0;
 
    for (int i = 0; i < N; i++) {
        int a;
        cin >> a;
        sum += a;
        pq.push(a);
        potions++;
 
        while (sum < 0) {
            sum -= pq.top();
            pq.pop();
            potions--;
        }
    }
 
    cout << potions << '\n';
}
int32_t main()
{
    fast;
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    solve();
}