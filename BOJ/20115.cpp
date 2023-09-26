#include<bits/stdc++.h>
#define x first
#define y second
using namespace std;

int n;
vector<double> v;
double ans = 0.0;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	cin >> n;
	for (int i = 0; i < n; i++) {
		double a;
		cin >> a;
		v.push_back(a);
	}
	sort(v.rbegin(), v.rend());
	ans += v[0];
	for (int i = 1; i < n; i++)
		ans += v[i] / 2.0;

	cout << ans;
}