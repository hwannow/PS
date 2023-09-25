#include<bits/stdc++.h>
#define x first
#define y second
using namespace std;

int n, m;
int a, b, rem = -1;
int ans = 0;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	cin >> n >> m;
	int o = abs(n - m);
	cin >> a;
	for (int i = 0; i < a; i++) {
		cin >> b;
		if (abs(m - b) < o) {
			rem = b;
			o = abs(m - b);
		}
	}
	if (rem != -1) ans = 1 + abs(m - rem);
	else ans = abs(n - m);
	cout << ans;
}