#include <bits/stdc++.h>
using namespace std;

char str[1000001];
int main() {
	char ck = '1', * p = str;
	int one = 0, zero = 0;
	cin >> str;

	while (*p) {
		if (str == p) {
			ck = *p; p++; continue;
		}
		if (ck == *p) {
			p++;
			continue;
		}
		if (*p == '0') {
			one++;
			p++; ck = '0';
		}
		else {
			zero++; p++; ck = '1';
		}
	}
	--p;
	if (*p == '1') one++;
	else zero++;

	if (one < zero) cout << one;
	else cout << zero;
}