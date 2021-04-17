#include <bits/stdc++.h>
using namespace std;

int solve(int n) {
    if (n == 1) {
        return 1;
    }
    int ans = solve(n - 1);
    return ans + n;
}

int main() {
    int n;
    cin >> n;
    cout << "Sum of first n natural numbers:-" << solve(n) << endl;
    return 0;
}