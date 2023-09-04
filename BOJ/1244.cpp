#include<bits/stdc++.h>
#define x first
#define y second
using namespace std;

int n, m;
int arr[101];

void solve(int a, int b) {
	if (a == 1) {
		for (int i = b - 1; i < n; i += b) {
			arr[i] = arr[i] == 1 ? arr[i] = 0 : arr[i] = 1;
		}
		return;
	}
	b--;
	int x = b;
	while (x - 1 >= 0 && x <= n && b >= 0 && b + 1 < n && arr[x - 1] == arr[b + 1]) {
		x--; b++;
	}
	for (int i = x; i <= b; i++)
		arr[i] = arr[i] == 1 ? arr[i] = 0 : arr[i] = 1;
	return;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	cin >> m;
	for (int i = 0; i < m; i++) {
		int a, b;
		cin >> a >> b;
		solve(a, b);
	}

	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
		if ((i + 1) % 20 == 0) cout << "\n";
	}
}