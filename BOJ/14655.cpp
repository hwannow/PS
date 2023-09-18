#include<bits/stdc++.h>
#define x first
#define y second
using namespace std;

int n;
int sum = 0;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	cin >> n;
	int a;
	for (int i = 0; i < n; i++) {
		cin >> a;
		sum += abs(a);
	}
	for (int j = 0; j < n; j++) {
		cin >> a;
		sum += abs(a);
	}
	cout << sum;
}