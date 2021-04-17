#include <bits/stdc++.h>
using namespace std;

int solve(int n) {
    if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }
    int ans1 = solve(n - 1);
    int ans2 = solve(n - 2);
    return ans1 + ans2;
}

int main() {
    int n;
    cin >> n;
    cout << "Fibonacci of n: " << solve(n) << endl;
    return 0;
}