#include<bits/stdc++.h>
#define x first
#define y second
using namespace std;

int n, m, virus = 0, ans = 987654321;
vector<pair<int, int>> v;
int board[51][51], visited[11], arr[11];
int dx[4] = { 1, -1, 0, 0 }, dy[4] = { 0, 0, 1, -1 };

int range_over(int nx, int ny) {
	return nx < 0 || ny < 0 || nx >= n || ny >= n;
}

int bfs() {
	queue<pair<int, int>> q;
	int visited2[51][51] = { 0 };
	for (int i = 0; i < m; i++) {
		visited2[v[arr[i]].x][v[arr[i]].y] = -1;
		q.push({ v[arr[i]].x, v[arr[i]].y });
	}
	while (!q.empty()) {
		auto cur = q.front(); q.pop();
		for (int dir = 0; dir < 4; dir++) {
			int nx = cur.x + dx[dir], ny = cur.y + dy[dir];
			if (range_over(nx, ny)) continue;
			if (visited2[nx][ny] > 0 || board[nx][ny] == 1 || visited2[nx][ny] == -1) continue;


			if (visited2[cur.x][cur.y] != -1) visited2[nx][ny] = visited2[cur.x][cur.y] + 1;
			else visited2[nx][ny] = 1;
			q.push({ nx, ny });
		}
	}
	int MAX = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (board[i][j] != 1 && !visited2[i][j]) return -1;
			if (board[i][j] != 1 && visited2[i][j] != -1) MAX = max(visited2[i][j], MAX);
		}
	}
	return MAX;
}

void dfs(int idx, int cnt) {
	if (cnt == m) {
		int BFS = bfs();
		if (BFS != -1)
			ans = min(ans, BFS);
		return;
	}
	for (int i = idx; i < virus; i++) {
		if (!visited[i]) {
			visited[i] = 1;
			arr[cnt] = i;
			dfs(i + 1, cnt + 1);
			visited[i] = 0;
		}
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> board[i][j];
			if (board[i][j] == 2) {
				virus++;
				v.push_back({ i, j });
			}
		}
	}

	dfs(0, 0);
	ans != 987654321 ? cout << ans : cout << -1;
}