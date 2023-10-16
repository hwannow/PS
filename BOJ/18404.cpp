#include<bits/stdc++.h>
#define x first
#define y second
using namespace std;

int n, m;
pair<int, int> knight;
vector<pair<int, int>> v;
int visited[501][501];
int dx[8] = { -2, -1, 1, 2, 2, 1, -1, -2 }, dy[8] = { -1, -2, -2, -1, 1, 2, 2, 1 };

int range_over(int nx, int ny) {
	return nx < 0 || ny < 0 || ny >= n || nx >= n;
}

void bfs() {
	queue<pair<int, int>> q;
	q.push(knight);
	visited[knight.x][knight.y] = 1;

	while (!q.empty()) {
		auto cur = q.front(); q.pop();
		for (int dir = 0; dir < 8; dir++) {
			int nx = cur.x + dx[dir], ny = cur.y + dy[dir];
			if (range_over(nx, ny) || visited[nx][ny]) continue;

			visited[nx][ny] = visited[cur.x][cur.y] + 1;
			q.push({ nx, ny });
		}
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	cin >> n >> m;
	cin >> knight.x >> knight.y;
	knight.x--, knight.y--;
	for (int i = 0; i < m; i++) {
		int a, b;
		cin >> a >> b;
		v.push_back({ a - 1, b - 1 });
	}
	bfs();
	for (int i = 0; i < m; i++) {
		cout << visited[v[i].x][v[i].y] - 1 << " ";
	}
}