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
	int a;
	for (int i = 0; i < n; i++) {
		cin >> a;
		v.push_back(a);
	}

	sort(v.begin(), v.end());

	for (int i = n - 1; i >= 2; i--) {
		int x = v[i], y = v[i - 1], z = v[i - 2];
		if (x < y + z) {
			cout << x + y + z;
			return 0;
		}
	}
	cout << "-1";
}