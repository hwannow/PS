#include<bits/stdc++.h>
#define x first
#define y second
using namespace std;



int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	string a, b; cin >> a >> b;
	if (a.length() != b.length()) {
		cout << 0;
		return 0;
	}

	int cnt = 0;
	for (int i = 0; i < a.length(); i++) {
		if (a[i] == b[i] && a[i] == '8')
			cnt++;
		else if (a[i] != b[i])
			break;
	}
	cout << cnt;
}