// // Created by Jestin Roy
// #include <bits/stdc++.h>
// using namespace std;
// using ll = long long;

// #define mod 1000000007
// #define int long long int
// #define fast ios_base::sync_with_stdio(false), cin.tie(NULL)
// #define PI 3.14159265358979323846
// #define endl "\n"

// void solve()
// {
//     int n;
//     cin >> n;

//     vector<pair<int, int>> x;
//     vector<pair<int, int>> y;
//     multiset<int> X;
//     multiset<int> Y;
//     for (int i = 0; i < n; i++)
//     {
//         int a, b;
//         cin >> a >> b;
//         x.push_back({a, b});
//         y.push_back({b, a});
//         X.insert(a);
//         Y.insert(b);
//     }
//     sort(x.begin(), x.end());
//     sort(y.begin(), y.end());
//     int h1 = 0;
//     int h2 = 0;
//     int h1Max = 0;
//     int h1Min = LONG_MAX;
//     int area = LONG_MAX;
//     for (int i = 0; i < n; i++)
//     {
//         h1Max = max(h1Max, x[i].second);
//         h1Min = min(h1Min, x[i].second);
//         h1 = h1Max - h1Min;
//         auto it = Y.find(x[i].second);
//         Y.erase(it);
//         h2 = *Y.rbegin() - *Y.begin();
//         int newArea = (x[i].first - x[0].first) * h1 + (x[n - 1].first - x[i - 1].first) * h2;
//         area = min(area, newArea);
//     }
//     int w1 = 0;
//     int w2 = 0;
//     int w1Max = 0;
//     int w1Min = LONG_MAX;

//     for (int i = 0; i < n; i++)
//     {
//         w1Max = max(w1Max, y[i].second);
//         w1Min = min(w1Min, y[i].second);
//         w1 = w1Max - w1Min;
//         auto it = X.find(y[i].second);
//         X.erase(it);
//         h2 = *X.rbegin() - *X.begin();
//         int newArea = (y[i].first - y[0].first) * w1 + (y[n - 1].first - y[i - 1].first) * w2;
//         area = min(area, newArea);
//     }
//     if (area == LONG_MAX)
//         area = 0;
//     cout << area << endl;
// }
// int32_t main()
// {
//     fast;
// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif
//     int t = 1;
//     cin >> t;
//     while (t--)
//     {
//         solve();
//     }
// }