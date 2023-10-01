#include<bits/stdc++.h>
#define x first
#define y second
using namespace std;

int n, m;
int a, b;
pair<int, int> START, END;
int board[1001][1001], visited[2][1001][1001];
int dx[4] = { 1, -1, 0, 0 }, dy[4] = { 0, 0, 1, -1 };

int range_over(int nx, int ny) {
	return nx < 0 || ny < 0 || nx >= n || ny >= m;
}

int bfs() {
	queue<tuple<int, int, int, int>> q;
	q.push({ START.x - 1, START.y - 1, 0, 0 });
	visited[0][START.x - 1][START.y - 1] = 1;

	while (!q.empty()) {
		auto cur = q.front(); q.pop();
		for (int dir = 0; dir < 4; dir++) {
			int nx = get<0>(cur) + dx[dir], ny = get<1>(cur) + dy[dir];
			if (range_over(nx, ny)) continue;
			if (visited[get<2>(cur)][nx][ny]) continue;
			if (board[nx][ny] && get<2>(cur)) continue;

			if (nx + 1 == END.x && ny + 1 == END.y)
				return get<3>(cur) + 1;

			if (board[nx][ny]) {
				q.push({ nx, ny, 1, get<3>(cur) + 1 });
				visited[1][nx][ny] = 1;
				continue;
			}

			q.push({ nx, ny, get<2>(cur), get<3>(cur) + 1 });
			visited[get<2>(cur)][nx][ny] = 1;
		}
	}
	return -1;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	cin >> n >> m;
	cin >> a >> b;
	START = make_pair(a, b);
	cin >> a >> b;
	END = make_pair(a, b);

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++)
			cin >> board[i][j];
	}

	int BFS = bfs();

	cout << BFS;
}