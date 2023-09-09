#include<bits/stdc++.h>
#define x first
#define y second
using namespace std;

int n, a;
vector<int> v;
int ans = 987654321;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	cin >> n;
	for (int i = 0; i < 2 * n; i++) {
		cin >> a;
		v.push_back(a);
	}

	sort(v.begin(), v.end());

	for (int i = 0, j = 2 * n - 1; i < n; i++, j--) {
		ans = min(ans, v[j] + v[i]);
	}
	cout << ans;
}