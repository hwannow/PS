#include<bits/stdc++.h>
#define x first
#define y second
using namespace std;

int n, m;
char board[501][501];
int visited[501][501];
int dx[4] = { 1, -1, 0, 0 }, dy[4] = { 0, 0, 1, -1 };

int range_over(int nx, int ny) {
	return nx < 0 || ny < 0 || nx >= n || ny >= m;
}

void bfs() {
	queue<pair<pair<int, int>, char>> q;
	q.push({ {0, 0}, board[0][0] });
	visited[0][0] = 1;

	while (!q.empty()) {
		auto cur = q.front(); q.pop();

		for (int dir = 0; dir < 4; dir++) {
			int nx = cur.x.x + dx[dir], ny = cur.x.y + dy[dir];
			if (range_over(nx, ny) || visited[nx][ny]) continue;
			if (board[nx][ny] == cur.y) continue;

			if (nx + 1 == n && ny + 1 == m) {
				cout << visited[cur.x.x][cur.x.y];
				return;
			}

			q.push({ {nx, ny}, board[nx][ny] });
			visited[nx][ny] = visited[cur.x.x][cur.x.y] + 1;
		}
	}

	cout << -1;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++)
			cin >> board[i][j];
	}

	bfs();
}