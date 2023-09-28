#include<bits/stdc++.h>
#define x first
#define y second
using namespace std;

int n;
int board[4][4];
int visited[4][4];
int dx[2] = { 0, 1 }, dy[2] = { 1, 0 };

int bfs() {
	queue<pair<int, int>> q;
	q.push({ 0, 0 });
	visited[0][0] = 1;

	while (!q.empty()) {
		auto cur = q.front(); q.pop();
		for (int dir = 0; dir < 2; dir++) {
			int nx = cur.x + dx[dir] * board[cur.x][cur.y], ny = cur.y + dy[dir] * board[cur.x][cur.y];
			if (nx < 0 || ny < 0 || nx >= n || ny >= n) continue;
			if (visited[nx][ny]) continue;
			if (board[nx][ny] == -1) return 1;
			visited[nx][ny] = 1;
			q.push({ nx, ny });
		}
	}
	return 0;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++)
			cin >> board[i][j];
	}

	if (bfs()) cout << "HaruHaru";
	else cout << "Hing";
}