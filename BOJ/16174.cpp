#include<bits/stdc++.h>
#define x first
#define y second
using namespace std;

int n;
int board[101][101];
int visited[101][101];
int dx[4] = { 1, -1, 0, 0 }, dy[4] = { 0, 0, 1, -1 };

int range_over(int nx, int ny) {
	return nx < 0 || ny < 0 || nx >= n || ny >= n;
}

void bfs() {
	queue<pair<int, int>> q;
	q.push({ 0, 0 });
	visited[0][0] = 1;
	while (!q.empty()) {
		auto cur = q.front(); q.pop();
		for (int dir = 0; dir < 4; dir++) {
			int nx = cur.x + dx[dir] * board[cur.x][cur.y], ny = cur.y + dy[dir] * board[cur.x][cur.y];
			if (range_over(nx, ny) || visited[nx][ny]) continue;
			if (board[nx][ny] == -1) {
				cout << "HaruHaru";
				return;
			}
			q.push({ nx, ny });
			visited[nx][ny] = 1;
		}
	}
	cout << "Hing";
	return;
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

	bfs();

}