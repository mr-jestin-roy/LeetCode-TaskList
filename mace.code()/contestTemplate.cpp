#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define int long long int
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL)
#define PI 3.14159265358979323846
bool ans = false;

string longestCommonPrefix(vector<string> s, int n)
{

    // If size is 0, return empty string
    if (n == 0)
        return "";

    if (n == 1)
        return ar[0];

    // Sort the given array
    sort(ar, ar + n);

    // Find the minimum length from
    // first and last string
    int en = min(ar[0].size(),
                 ar[n - 1].size());

    // Now the common prefix in first and
    // last string is the longest common prefix
    string first = ar[0], last = ar[n - 1];
    int i = 0;
    while (i < en && first[i] == last[i])
        i++;

    string pre = first.substr(0, i);
    return pre;
}

int32_t main()
{
    fast;

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<string> s(n, "");
        for (int i = 0; i < n; i++)
        {
            cin >> s[i];
        }
        cout << longestCommonPrefix(s, n).size() << endl;
    }
}