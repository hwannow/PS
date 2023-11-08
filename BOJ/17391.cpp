#include<bits/stdc++.h>
#define x first
#define y second
using namespace std;

int n, m;
int board[301][301];
int visited[301][301];
int dx[2] = { 0, 1 }, dy[2] = { 1, 0 };

int range_over(int nx, int ny) {
    return nx < 0 || ny < 0 || nx >= n || ny >= m;
}

void bfs() {
    queue<pair<pair<int, int>, int>> q;
    q.push({ { 0, 0 }, 0 });
    visited[0][0] = 1;

    while (!q.empty()) {
        auto cur = q.front(); q.pop();
        for (int dir = 0; dir < 2; dir++) {
            for (int i = 1; i <= board[cur.x.x][cur.x.y]; i++) {
                int nx = dx[dir] * i + cur.x.x, ny = dy[dir] * i + cur.x.y;
                if (range_over(nx, ny) || visited[nx][ny]) continue;
                if (nx == n - 1 && ny == m - 1) {
                    cout << cur.y + 1;
                    return;
                }
                visited[nx][ny] = 1;
                q.push({ {nx, ny}, cur.y + 1 });
            }
        }
    }
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