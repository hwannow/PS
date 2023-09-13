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

	sort(v.rbegin(), v.rend());
	int ans = 0;
	for (int i = 0; i < n; i += 3) {
		ans += v[i];
		if (i + 1 < n) ans += v[i + 1];
	}
	cout << ans;
}