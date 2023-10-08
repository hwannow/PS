#include<bits/stdc++.h>
#define x first
#define y second
using namespace std;

int n, m;
int visited[1000001];

void bfs() {
	queue<pair<int, int>> q;
	q.push({ n, 0 });
	visited[n] = 1;

	while (!q.empty()) {
		auto cur = q.front(); q.pop();
		for (int a : {cur.x + 1, cur.x * 2}) {
			if (a > m || visited[a]) continue;
			if (a == m) {
				cout << cur.y + 1;
				return;
			}

			q.push({ a, cur.y + 1 });
			visited[a] = 1;

		}
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	cin >> n >> m;

	bfs();
}