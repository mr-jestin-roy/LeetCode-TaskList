#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define int long long int
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL)
#define PI 3.14159265358979323846

int32_t main()
{
    fast;
    int t = 1;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n + 2);
        map<int, int> hash;
        int sum = 0;
        for (int i = 0; i < n + 2; i++)
        {
            cin >> arr[i];
            sum += arr[i];
            hash[arr[i]]++;
        }

        sort(arr.begin(), arr.end());
        bool flag = false;
        vector<int> ans;
        for (int i = n + 1; i >= 0; i--)
        {
            if (sum - arr[i] > arr[i])
            {
                int x = sum - 2 * arr[i];

                if (x == arr[i])
                {
                    if (hash[x] > 1)
                    {
                        flag = true;
                        int sumn = arr[i], add = x;
                        for (int j = 0; j < n + 2; j++)
                        {
                            if (sumn == arr[j])
                            {
                                sumn = -1;
                            }
                            else if (x == arr[j])
                            {
                                x = -1;
                            }
                            else
                                ans.push_back(arr[j]);
                        }
                        break;
                    }
                }
                else
                {
                    if (hash[x])
                    {
                        flag = true;
                        int sumn = arr[i], add = x;
                        for (int j = 0; j < n + 2; j++)
                        {
                            if (sumn == arr[j])
                            {
                                sumn = -1;
                            }
                            else if (x == arr[j])
                            {
                                x = -1;
                            }
                            else
                                ans.push_back(arr[j]);
                        }
                        break;
                    }
                }
            }
        }

        if (flag)
            for (auto i : ans)
                cout << i << " ";
        else
            cout << -1;
        cout << endl;
    }
}
