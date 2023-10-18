#include<bits/stdc++.h>
#define x first
#define y second
using namespace std;

int n, m;
vector<int> v;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	cin >> n >> m;
	for (int i = 0; i < m; i++) {
		int a;
		cin >> a;
		v.push_back(a);
	}

	sort(v.begin(), v.end());
	int ans = v[m - 1], ans2 = v[m - 1];
	for (int i = m - 2, idx = 2; i >= 0; i--, idx++) {
		if (ans2 <= v[i] * idx && n >= idx) {
			ans = v[i];
			ans2 = v[i] * idx;
		}
	}
	cout << ans << " " << ans2;
}