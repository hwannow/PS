#include<bits/stdc++.h>
#define x first
#define y second
using namespace std;

int n, ans = 0;
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

	while (1) {
		int max_idx = max_element(v.begin(), v.end()) - v.begin();
		if (max_idx == 0) break;

		v[max_idx] -= 1;
		ans++;
		v[0]++;
	}
	int ck = 0;
	for (int i = 1; i < n; i++) {
		if (v[0] == v[i]) ck = 1;
	}
	if (ck) ans += 1;
	cout << ans;
}