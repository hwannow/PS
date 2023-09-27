#include<bits/stdc++.h>
#define x first
#define y second
using namespace std;

char str[101];
int idx = 0, ch = 0;
int arr[51];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	cin >> str;

	for (int i = 0; i < strlen(str); i++) {
		if (str[i] == 'X') ch++;
		else if (!ch)
			arr[idx++] = -1;
		else {
			if (ch % 2) {
				cout << -1;
				return 0;
			}
			arr[idx++] = ch;
			arr[idx++] = -1;
			ch = 0;
		}
	}
	if (ch)
		arr[idx++] = ch;

	if (ch % 2) {
		cout << -1;
		return 0;
	}

	for (int i = 0; i < idx; i++) {
		if (arr[i] == -1) cout << ".";
		else {
			while (arr[i] >= 4) {
				cout << "AAAA";
				arr[i] -= 4;
			}
			if (arr[i] == 2) cout << "BB";
		}
	}
}