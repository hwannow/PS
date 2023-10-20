#include<bits/stdc++.h>
#define x first
#define y second
using namespace std;

long long n, ans;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	cin >> n;
	while (n % 5) {
		n -= 3; ans++;
	}

	if (n < 0) cout << -1;
	else cout << ans + n / 5;
}