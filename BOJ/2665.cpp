#include<bits/stdc++.h>
#define x first
#define y second
using namespace std;

char board[51][51];
int visited[51][51];
int dx[4] = { 1, 0, -1, 0 }, dy[4] = { 0, 1, 0, -1 };
deque<tuple<int, int, int>> q;
int n;

int bfs() {
	q.push_front({ 0, 0, 0 });
	visited[0][0] = 1;
	while (!q.empty()) {
		auto cur = q.front(); q.pop_front();
		for (int dir = 0; dir < 4; dir++) {
			int nx = get<0>(cur) + dx[dir], ny = get<1>(cur) + dy[dir];
			if (nx < 0 || ny < 0 || nx >= n || ny >= n) continue;
			if (visited[nx][ny] != 0) continue;
			if (nx == n - 1 && ny == n - 1)
				return get<2>(cur);
			if (board[nx][ny] == '0')
				q.push_back({ nx, ny, get<2>(cur) + 1 });
			else
				q.push_front({ nx, ny, get<2>(cur) });
			visited[nx][ny] = visited[get<0>(cur)][get<1>(cur)] + 1;
		}
	}
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

	cout << bfs();

}