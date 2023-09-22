#include<bits/stdc++.h>
#define x first
#define y second
using namespace std;

int n, m;
int ans = 1;
vector<int> v;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		v.push_back(a);
	}

	sort(v.begin(), v.end());
	int j = 0;

	for (int i = 1; i < n; i++) {
		if (v[i] - v[j] + 1 <= m)
			continue;
		else {
			ans++;
			j = i;
		}
	}
	cout << ans;
}