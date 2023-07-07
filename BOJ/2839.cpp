#include<bits/stdc++.h>
#define x first
#define y second
using namespace std;

int arr[5005];

int main() {
	int n, five = 0, three = 0;
	cin >> n;
	if (!(n % 5)) {
		cout << n / 5;
		return 0;
	}

	while (n - 5 >= 0) {
		n -= 5;
		five++;
	}
	while (1) {
		n -= 3; three++;
		for (int i = five; i > 0; i--) {
			if (n >= 0) break;
			n += 2;
			five--; three++;
		}
		while (n - 3 >= 0) {
			n -= 3; three++;
		}

		if (n <= 0) break;

	}



	if (n) {
		cout << "-1";
		return 0;
	}
	cout << five + three;
}