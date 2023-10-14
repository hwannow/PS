#include<bits/stdc++.h>
#define x first
#define y second
using namespace std;

int n, m;
int a, b;
int ansa, ansb, ans = 987654321;

vector<int> v[101];

void bfs(int i, int j) {
	int visited[101] = { 0 }, tmp = 0;
	queue<pair<int, int>> q; //ÁÂÇ¥, ½Ã°£
	q.push({ i, 0 });
	q.push({ j ,0 });
	visited[i] = 0;
	visited[j] = 0;

	while (!q.empty()) {
		auto cur = q.front(); q.pop();
		for (int a : v[cur.x]) {
			if (visited[a] || a == i || a == j) continue;
			visited[a] = cur.y + 1;
			tmp += visited[a];
			q.push({ a, cur.y + 1 });
		}
	}

	if (tmp < ans) {
		ansa = i, ansb = j, ans = tmp;
	}

}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	cin >> n >> m;
	for (int i = 0; i < m; i++) {
		cin >> a >> b;
		v[a - 1].push_back(b - 1);
		v[b - 1].push_back(a - 1);
	}

	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++)
			bfs(i, j);
	}

	cout << ansa + 1 << " " << ansb + 1 << " " << ans * 2;
}