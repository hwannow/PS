#include<bits/stdc++.h>
#define x first
#define y second
using namespace std;

int n, m, ans = 0;
int arr[101];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> arr[i];

	m = arr[n - 1] - 1;

	for (int i = n - 2; i >= 0; i--) {
		if (arr[i] > m) {
			ans += arr[i] - m;
			arr[i] -= m;
			m -= 1;
		}
		else if (arr[i] == m)
			m -= 1;
		else m = arr[i] - 1;
	}
	cout << ans;
}