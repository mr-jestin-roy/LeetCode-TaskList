#include <bits/stdc++.h>
using namespace std;

long long subarrayXor(int arr[], int n)
{
    long long ans = 0;


    for (int i = 0; i < n; i++) {
        int xorSum = 0;


        for (int j = i; j < n; j++) {
            // calculate xorSum
            xorSum = xorSum ^ arr[j];
            if (xorSum % 2 == 0) {
                ans++;
            }
        }
    }
    cout << ans << endl;
}


int main() {
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        subarrayXor(arr, n);
    }
    return 0;
}