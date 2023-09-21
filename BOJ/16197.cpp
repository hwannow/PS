#include<bits/stdc++.h>
#define x first
#define y second
using namespace std;

int n, m, ck = 1;
char board[21][21];
int ans = 11;
pair<int, int> one, two;
int dx[4] = { 1, -1, 0, 0 }, dy[4] = { 0, 0, 1, -1 };

int range(int x, int y) {
	return (x < 0 || x >= n || y < 0 || y >= m);
}

void bfs() {
	queue<tuple<pair<int, int>, pair<int, int>, int>> q;
	q.push({ one,two, 0 });
	while (!q.empty()) {
		auto cur = q.front(); q.pop();
		if (get<2>(cur) >= 10) continue;

		for (int i = 0; i < 4; i++) {
			int one_nx = get<0>(cur).x + dx[i], one_ny = get<0>(cur).y + dy[i];
			int two_nx = get<1>(cur).x + dx[i], two_ny = get<1>(cur).y + dy[i];

			if (board[one_nx][one_ny] == '#') {
				one_nx = get<0>(cur).x;
				one_ny = get<0>(cur).y;
			}
			if (board[two_nx][two_ny] == '#') {
				two_nx = get<1>(cur).x;
				two_ny = get<1>(cur).y;
			}

			if (range(one_nx, one_ny) && range(two_nx, two_ny)) continue;

			if (!range(one_nx, one_ny) && range(two_nx, two_ny)) {
				ans = min(ans, get<2>(cur) + 1);
				if (get<2>(cur) + 1 == ans)
					continue;
			}
			else if (range(one_nx, one_ny) && !range(two_nx, two_ny)) {
				ans = min(ans, get<2>(cur) + 1);
				continue;
			}

			q.push({ { one_nx, one_ny }, { two_nx, two_ny }, get<2>(cur) + 1 });
		}
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> board[i][j];
			if (board[i][j] == 'o') {
				if (ck) {
					one = make_pair(i, j);
					ck = 0;
				}
				else two = make_pair(i, j);
			}
		}
	}
	bfs();
	if (ans >= 11) cout << "-1";
	else
		cout << ans;
}