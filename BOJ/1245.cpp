#include<bits/stdc++.h>
#define x first
#define y second
using namespace std;

int board[101][71];
int visited[101][71];
int n, m, ans = 0, ck = 1;
int dx[8] = { 1, -1, 0, 0, -1, -1, 1, 1 }, dy[8] = { 0, 0, 1, -1, -1, 1, -1, 1 };

int range_over(int nx, int ny) {
    return nx < 0 || ny < 0 || nx >= n || ny >= m;
}

void bfs(int i, int j) {
    queue<pair<int, int>> q;
    q.push({ i, j });
    visited[i][j] = 1;

    while (!q.empty()) {
        auto cur = q.front(); q.pop();
        for (int dir = 0; dir < 8; dir++) {
            int nx = dx[dir] + cur.x, ny = dy[dir] + cur.y;
            if (range_over(nx, ny)) continue;
            if (board[nx][ny] > board[cur.x][cur.y]) ck = 0;
            if (board[nx][ny] != board[cur.x][cur.y] || visited[nx][ny]) continue;
            visited[nx][ny] = 1;
            q.push({ nx, ny });
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

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (visited[i][j]) continue;
            ck = 1;
            bfs(i, j);
            if (ck) ans++;
        }
    }
    cout << ans;
}