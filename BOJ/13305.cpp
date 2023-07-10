#include <bits/stdc++.h>
using namespace std;

long long dist[100001];
long long price[100001];
int main() {
	int n, idx = 0;
	long long answer = 0;
	cin >> n;
	for (int i = 0; i < n - 1; i++)
		cin >> dist[i];
	for (int j = 0; j < n; j++)
		cin >> price[j];

	while (idx != n - 1) {
		for (int i = idx + 1; i < n; i++) {
			if (price[idx] > price[i]) {
				for (int j = idx; j < i; j++)
					answer += price[idx] * dist[j];
				idx = i;
				break;
			}
			if (i == n - 1) {
				for (int j = idx; j < i; j++)
					answer += price[idx] * dist[j];
				idx = i;
			}
		}
	}

	cout << answer;
}