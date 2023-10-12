#include<bits/stdc++.h>
#define x first
#define y second
using namespace std;

long long n, sum = 0, ans = 0;
vector<long long> v;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	cin >> n;

	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		v.push_back(a);
		sum += a;
	}

	sort(v.begin(), v.end());

	for (int i = 0; i < v.size(); i++) {
		ans += v[i] * (sum - v[i]);
		sum -= v[i];
	}

	cout << ans;
}