#pragma GCC optimize("Ofast")
#pragma GCC optimize ("O3")
#pragma GCC target("avx,avx2,fma")
#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <string>
#include <cmath>
using namespace std;
#define int long long
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
#define mem1(a) memset(a, -1, sizeof(a))
#define mem0(a) memset(a, 0, sizeof(a))
#define ppc __builtin_popcount
#define ppcll __builtin_popcountll

// Function to get the sum of digits of a number
int digitSum(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

// Check if a number is a power of 10
bool isPowerOf10(int n) {
    if (n <= 0) return false;
    while (n % 10 == 0) n /= 10;
    return n == 1;
}

void solve() {
    int n;
    cin >> n;
    
    cout << "mul 9" << endl;
    int response;
    cin >> response;
    if (response == -1) exit(0);
    
    cout << "digit" << endl;
    cin >> response;
    if (response == -1) exit(0);
    
    cout << "digit" << endl;
    cin >> response;
    if (response == -1) exit(0);
    
    cout << "add " << n - 9 << endl;
    cin >> response;
    if (response == -1) exit(0);
    
    cout << "!" << endl;
    cin >> response;
    if (response == -1) exit(0);
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
} 