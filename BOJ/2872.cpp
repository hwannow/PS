#include<bits/stdc++.h>
#define x first
#define y second
using namespace std;

int n;
int arr[300001];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> arr[i];

	int cnt = n;
	for (int i = n - 1; i >= 0; i--) {
		if (arr[i] == cnt)
			cnt--;
	}

	cout << cnt;
}