#include<bits/stdc++.h>
#define x first
#define y second
using namespace std;

int n, m;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	cin >> n;
	cin >> m;
	int MIN = m, ans = 0; n--; cout << ans << " ";

	while (n--) {
		cin >> m;

		if (m < MIN) MIN = m;

		ans = max(ans, m - MIN);
		cout << ans << " ";
	}
}