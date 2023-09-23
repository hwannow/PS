#include<bits/stdc++.h>
#define x first
#define y second
using namespace std;

int n;
vector<int> v;
long long int m = 0, ans = 0;

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

	for (int i = 0; i < n; i++) {
		if (v[i] - m >= 0)
			ans += v[i] - m;
		m++;
	}
	cout << ans;
}