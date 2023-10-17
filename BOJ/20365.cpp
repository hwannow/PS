#include<bits/stdc++.h>
#define x first
#define y second
using namespace std;

int n;
string str;
int b = 0, r = 0, bck = 0, rck = 0;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	cin >> n;
	cin >> str;

	if (str[0] == 'B') bck = 1;
	else rck = 1;

	for (int i = 0; i < n; i++) {
		if (str[i] == 'B' && bck) continue;
		if (str[i] == 'R' && rck) continue;
		if (str[i] == 'B' && rck) {
			rck = 0, bck = 1; r++;
		}
		if (str[i] == 'R' && bck) {
			rck = 1, bck = 0; b++;
		}
	}
	if (bck) b++;
	else r++;

	cout << min(b, r) + 1;
}