#include<bits/stdc++.h>
#define x first
#define y second
using namespace std;

int n;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	cin >> n;
	cout << "Gnomes:\n";
	for (int i = 0; i < n; i++) {
		int a, b, c;
		cin >> a >> b >> c;
		if (a <= b && b <= c) cout << "Ordered\n";
		else if (a >= b && b >= c) cout << "Ordered\n";
		else cout << "Unordered\n";
	}
}