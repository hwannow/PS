#include<bits/stdc++.h>
#define x first
#define y second
using namespace std;

int sum = 0;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= m; i++)
		sum += i;
	n -= sum;

	if (n < 0)
		cout << -1;
	else {
		if (n % m == 0)
			cout << m - 1;
		else cout << m;
	}
}