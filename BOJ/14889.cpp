#include<bits/stdc++.h>
#define x first
#define y second
using namespace std;

int n;
int arr[21][21], team[21];
int ans = 987654321;

void solve(int cnt, int idx) {
	if (cnt == n / 2) {
		int a = 0, b = 0;

		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				if (team[i] && team[j]) a += arr[i][j];
				else if (!team[i] && !team[j]) b += arr[i][j];
			}
		}

		ans = min(ans, abs(a - b));
		return;
	}

	for (int i = idx; i < n; i++) {
		if (team[i]) continue;
		team[i] = 1;
		solve(cnt + 1, i + 1);
		team[i] = 0;
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) cin >> arr[i][j];
	}

	solve(0, 0);
	cout << ans;
}