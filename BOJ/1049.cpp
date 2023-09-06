#include<bits/stdc++.h>
#define x first
#define y second
using namespace std;

int n, m;
int a, b, c;
int six = 987654321, one = 987654321;
int ans = 987654321;
int case1, case2, case3;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	cin >> n >> m;

	for (int i = 0; i < m; i++) {
		cin >> a >> b;
		six = min(a, six);
		one = min(b, one);
	}

	if (n % 6 == 0) case1 = six * (n / 6);
	else case1 = six * (n / 6 + 1);

	case2 = one * n;

	case3 = six * (n / 6) + one * (n % 6);

	ans = min(case1, case2);
	ans = min(ans, case3);

	cout << ans;
}