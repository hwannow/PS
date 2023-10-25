#include<bits/stdc++.h>
#define x first
#define y second
using namespace std;

int n;
vector<pair<int, int>> v;
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	cin >> n;
	for (int i = 0; i < n; i++) {
		int a, b;
		cin >> a >> b;
		v.push_back({ a,b });
	}
	sort(v.begin(), v.end());
	int ans = v[0].x + v[0].y;
	for (int i = 1; i < v.size(); i++) {
		if (ans <= v[i].x)
			ans = v[i].x + v[i].y;
		else
			ans = ans + v[i].second;
	}

	cout << ans << '\n';
	return 0;
}