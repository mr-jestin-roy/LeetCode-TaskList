#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
#define mod 998244353
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL)
#define PI 3.14159265358979323846
#define inf 1e18
void findCombinations(int arr[], int index,int num, int reducedNum)
{
    if (reducedNum < 0)
        return;

    if (reducedNum == 0)
    {
        for (int i = 0; i < index; i++)
            cout << arr[i] << " ";
        cout << endl;
        return;
    }

    int prev = (index == 0)? 1 : arr[index-1];

    for (int k = prev; k <= num ; k++)
    {

        arr[index] = k;
 
        findCombinations(arr, index + 1, num,reducedNum - k);
    }
}

void solve()#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
#define mod 998244353
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL)
#define PI 3.14159265358979323846
#define inf 1e18
void findCombinations(int arr[], int index,int num, int reducedNum)
{
    if (reducedNum < 0)
        return;

    if (reducedNum == 0)
    {
        for (int i = 0; i < index; i++)
            cout << arr[i] << " ";
        cout << endl;
        return;
    }

    int prev = (index == 0)? 1 : arr[index-1];

    for (int k = prev; k <= num ; k++)
    {

        arr[index] = k;
 
        findCombinations(arr, index + 1, num,reducedNum - k);
    }
}

void solve()
{
    int n;
    cin>>n;
    int arr[n];
    findCombinations(arr,0,n,n);
}

int32_t main()
{
    fast;
    cout << fixed << setprecision(20);
    int t = 1;
    cin >> t;
    for (int tt = 1; tt <= t; tt++)
    {
        // cout << "Case #" << tt << ": ";
        solve();
    }
}

{
    int n;
    cin>>n;
    int arr[n];
    findCombinations(arr,0,n,n);
}

int32_t main()
{
    fast;
    cout << fixed << setprecision(20);
    int t = 1;
    cin >> t;
    for (int tt = 1; tt <= t; tt++)
    {
        // cout << "Case #" << tt << ": ";
        solve();
    }
}
