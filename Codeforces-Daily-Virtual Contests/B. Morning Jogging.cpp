#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define int long long int
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL)
#define PI 3.14159265358979323846

int32_t main() {
	int t = 1;
	cin >> t;
	while (t--) {
		int n, m;
		cin >> n >> m;

		vector<vector<int>> mat(n, vector<int>(m));
		vector < pair<int, pair<int, int>>> len;
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				cin >> mat[i][j];
				len.push_back({mat[i][j], {i, j}});
			}
		}

		sort(len.begin(), len.end());
		vector<bool> visited(m, false);

		set<int> s;
		for (int i = 0; i < m; i++)
		{
			s.insert(i);
		}

		for (int i = 0; i < m; i++)
		{
			s.erase(len[i].second.second);
		}

		for (int i = 0; i < m; i++)
		{
			if (visited[len[i].second.second])
			{
				int temp = len[i].first;
				mat[len[i].second.first][len[i].second.second] = mat[len[i].second.first][*s.begin()];
				mat[len[i].second.first][*s.begin()] = temp;
				visited[*s.begin()] = true;
				s.erase(s.begin());
			}
			else
			{
				visited[len[i].second.second] = true;
			}
		}

		for (auto i : mat)
		{
			for (auto j : i)
			{
				cout << j << " ";
			}
			cout << endl;
		}

	}

}