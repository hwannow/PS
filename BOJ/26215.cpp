#include<bits/stdc++.h>
#define x first
#define y second
using namespace std;

int n;
vector<int> v;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	cin >> n;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		v.push_back(a);
	}

	if (n == 1) {
		if (v[0] <= 1440) {
			cout << v[0];
			return 0;
		}
		cout << "-1";
		return 0;
	}

	int ans = 0;
	while (1) {
		sort(v.begin(), v.end());

		if (v[n - 1] == 0) break;

		v[n - 1]--;
		if (v[n - 2]) v[n - 2]--;
		ans++;

		if (ans > 1440) {
			cout << "-1";
			return 0;
		}
	}
	cout << ans;
}