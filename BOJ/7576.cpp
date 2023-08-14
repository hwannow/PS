#include<bits/stdc++.h>
#define x first
#define y second
using namespace std;

int board[1001][1001];
int visited[1001][1001];
int dx[4] = { 1, 0, -1, 0 }, dy[4] = { 0, 1, 0, -1 };

int bfs(queue<pair<int, int>> q, int n, int m, int* total) {
	int max = 1;
	while (!q.empty()) {
		auto cur = q.front(); q.pop();
		if (max < visited[cur.x][cur.y]) max = visited[cur.x][cur.y];
		for (int dir = 0; dir < 4; dir++) {
			int nx = cur.x + dx[dir], ny = cur.y + dy[dir];
			if (nx < 0 || ny < 0 || nx >= n || ny >= m) continue;
			if (board[nx][ny] != 0 || visited[nx][ny] != 0) continue;
			(*total)--;
			visited[nx][ny] = visited[cur.x][cur.y] + 1;
			q.push({ nx, ny });
		}
	}
	return max;
}


int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	queue<pair<int, int>> q;
	int n, m;
	cin >> m >> n;
	int total = n * m;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> board[i][j];

			if (board[i][j] == 1) {
				q.push({ i, j });
				visited[i][j] = 1;
				total--;
			}
			else if (board[i][j] == -1) {
				total--;
			}
		}
	}

	int max = bfs(q, n, m, &total);

	if (total) cout << "-1";
	else cout << max - 1;
}