#include<bits/stdc++.h>
#define x first
#define y second
using namespace std;
int dx[4] = { 1, -1, 0, 0 }, dy[4] = { 0, 0, 1, -1 };

int arr[21][21];
int n, m;
queue<pair<int, int>> q;
vector<pair<int, int>> v;

int bfs() {
	int ret = 0;
	int visited[21][21] = { 0 };
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (arr[i][j] == 2 && !visited[i][j]) {
				q.push({ i, j });
				visited[i][j] = 1;
				int flag = 1;
				int size = q.size();
				while (!q.empty()) {
					auto cur = q.front(); q.pop();
					for (int k = 0; k < 4; k++) {
						int nx = dx[k] + cur.x, ny = dy[k] + cur.y;
						if (nx < 0 || ny < 0 || nx >= n || ny >= m || visited[nx][ny]) continue;
						if (arr[nx][ny] == 1) continue;
						if (arr[nx][ny] == 0) {
							flag = 0;
							continue;
						}
						visited[nx][ny] = 1;
						/*cout << "nx: " << nx << ", ny: " << ny << ", flag: " << flag<< "\n" ;*/
						q.push({ nx, ny }); size++;
					}
				}
				if (flag) ret += size;
			}
		}
	}
	/*cout << "--------------- ret: " << ret << "\n";*/
	return ret;
}

int solve() {
	int ret = 0;
	for (int x1 = 0; x1 < n; x1++) {
		for (int y1 = 0; y1 < m; y1++) {
			for (int x2 = 0; x2 < n; x2++) {
				for (int y2 = 0; y2 < m; y2++) {
					if (x1 == x2 && y1 == y2) continue;
					if (arr[x1][y1] || arr[x2][y2]) continue;
					arr[x1][y1] = 1;
					arr[x2][y2] = 1;
					ret = max(ret, bfs());
					/*for (int i = 0; i < n; i++) {
						for (int j = 0; j < m; j++)
							cout << arr[i][j] << " ";
						cout << "\n";
					}
					cout << "ret: " << ret << "\n";*/
					arr[x1][y1] = 0;
					arr[x2][y2] = 0;
				}
			}
		}
	}
	return ret;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> arr[i][j];
		}
	}

	cout << solve();
}