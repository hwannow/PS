#include<bits/stdc++.h>
#define x first
#define y second
using namespace std;

int ans = 0;
int n, m;
vector<int> v1, v2;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		if (a % 10) v2.push_back(a);
		else v1.push_back(a);
	}
	sort(v1.begin(), v1.end());

	for (int i = 0; i < v1.size(); i++) {
		if (v1[i] == 10) {
			ans++;
			continue;
		}
		if (!m) break;
		while (m && v1[i] > 10) {
			v1[i] -= 10;
			m--;
			ans++;
			if (v1[i] == 10) ans++;
		}
	}

	for (int i = 0; i < v2.size(); i++) {
		if (!m) break;
		while (m && v2[i] - 10 >= 0) {
			v2[i] -= 10;
			m--;
			ans++;
		}
	}

	cout << ans;
}