#include<bits/stdc++.h>
#define x first
#define y second
using namespace std;

string str;
string str2;
int ans = 0;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	getline(cin, str);
	getline(cin, str2);

	for (int i = 0; i < str.length(); i++) {
		int ck = 1;
		for (int j = 0; j < str2.length(); j++) {
			if (str[i + j] != str2[j]) {
				ck = 0;
				break;
			}
		}
		if (ck) {
			ans++;
			i += str2.length() - 1;
		}
	}

	cout << ans;
}