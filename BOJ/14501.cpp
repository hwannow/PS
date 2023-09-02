#include<bits/stdc++.h>
#define x first
#define y second
using namespace std;

int n;
vector<pair<int, int>> v[15];
int ans = 0;

void solve(int day, int benefit) {
	if (day >= n) {
		ans = max(ans, benefit);
		return;
	}
	if (day + v[day][0].x <= n)
		solve(day + v[day][0].x, benefit + v[day][0].y);
	solve(day + 1, benefit);
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	cin >> n;
	for (int i = 0; i < n; i++) {
		int a, b;
		cin >> a >> b;
		v[i].push_back({ a, b });
	}
	solve(0, 0);
	cout << ans;
}