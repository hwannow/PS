#include<bits/stdc++.h>
#define x first
#define y second
using namespace std;

char str[501];
int zero = 0, one = 0;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin >> str;
	int len = strlen(str);
	for (int i = 0; i < len; i++) {
		if (str[i] == '0') zero++;
		else one++;
	}
	zero /= 2;
	one /= 2;

	for (int i = 0; i < len; i++) {
		if (str[i] == '1' && one >= 1) {
			one--;
			str[i] = '6';
		}
		else if (one == 0) break;
	}

	for (int i = len - 1; i >= 0; i--) {
		if (str[i] == '0' && zero >= 1) {
			zero--;
			str[i] = '6';
		}
		else if (zero == 0) break;
	}

	for (int i = 0; i < len; i++) {
		if (str[i] == '6') continue;
		cout << str[i];
	}
}