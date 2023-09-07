#include<bits/stdc++.h>
#define x first
#define y second
using namespace std;

int n;
int five = 0, two = 0;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	cin >> n;
	five = n / 5;
	n = n % 5;

	int ck = 1;
	while (n != 0) {
		if (n < 2) {
			if (five > 0) {
				five--;
				two += 2;
				n += 1;
			}
			else {
				ck = 0;
				break;
			}
		}
		else {
			two++;
			n -= 2;
		}
	}

	if (ck) cout << five + two;
	else cout << "-1";
}