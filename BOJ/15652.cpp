#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>
using namespace std;

int n, m;
int arr[9] = { 0 };
int visited[9]{ 0 };

void dfs(int idx, int cnt) {
	if (cnt == m) {
		for (int i = 0; i < m; i++)
			cout << arr[i] << ' ';
		cout << '\n';
		return;
	}
	for (int i = idx; i <= n; i++) {
		visited[i] = 1;
		arr[cnt] = i;
		dfs(i, cnt + 1);
		visited[i] = 0;

	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n >> m;
	dfs(1, 0);
}