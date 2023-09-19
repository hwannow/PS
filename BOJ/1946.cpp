#include<bits/stdc++.h>
#define x first
#define y second
using namespace std;

int n, m;


int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> m;
		vector<pair<int, int>> v;
		int a, b, ans = 1;
		for (int j = 0; j < m; j++) {
			cin >> a >> b;
			v.push_back(make_pair(a, b));
		}
		sort(v.begin(), v.end());

		int idx = 0;

		for (int j = 1; j < m; j++) {
			if (v[idx].y > v[j].y) {
				ans++;
				idx = j;
			}
		}

		cout << ans << "\n";
	}
}