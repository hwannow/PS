#include<bits/stdc++.h>
#define x first
#define y second
using namespace std;


int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	char s[100002], t[100002];
	while (cin >> s >> t) {
		int i = 0, j = 0, ck = 0;
		for (j; j < strlen(t); j++) {
			if (t[j] == s[i]) i++;
			if (i == strlen(s)) {
				ck = 1;
				break;
			}
		}
		if (ck) cout << "Yes\n";
		else cout << "No\n";
	}
}