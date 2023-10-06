#include<bits/stdc++.h>
#define x first
#define y second
using namespace std;

int n, m, a;
char board[1001][1001];
pair<int, int> start;
int visited[10][1001][1001];
int dx[4] = { 1, -1, 0, 0 }, dy[4] = { 0, 0, 1, -1 };

int range_over(int nx, int ny) {
	return nx < 0 || ny < 0 || nx >= n || ny >= m;
}

int bfs() {
	queue<pair<pair<int, int>, pair<int, int>>> q; //좌표 x, y, time, 방문한 숫자
	q.push({ start, {0, 0} });
	visited[0][start.x][start.y];

	while (!q.empty()) {
		auto cur = q.front(); q.pop();
		for (int dir = 0; dir < 4; dir++) {
			int nx = cur.x.x + dx[dir], ny = cur.x.y + dy[dir];
			int time = cur.y.x, num = cur.y.y;

			if (range_over(nx, ny)) continue;
			if (board[nx][ny] == 'X') continue;

			if ((board[nx][ny] != num + 1 + '0' || board[nx][ny] == '.') && visited[num][nx][ny]) continue;
			if (board[nx][ny] == num + 1 + '0') {
				if (num + 1 == a) return time + 1;
				q.push({ {nx, ny}, {time + 1, num + 1} });
				visited[num + 1][nx][ny] = 1;
			}

			q.push({ {nx, ny}, {time + 1, num} });
			visited[num][nx][ny] = 1;
		}
	}
	return 0;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	cin >> n >> m >> a;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> board[i][j];
			if (board[i][j] == 'S') start = make_pair(i, j);
		}
	}

	cout << bfs();
}