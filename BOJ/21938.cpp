#include<bits/stdc++.h>
#define x first
#define y second
using namespace std;

int n, m;
int board[1001][1001];
int visited[1001][1001];
int dx[4] = { 1, -1, 0, 0 }, dy[4] = { 0, 0,1,-1 };
int ans = 0;

int range_over(int nx, int ny) {
    return nx < 0 || ny < 0 || nx >= n || ny >= m;
}

void bfs(int i, int j) {
    queue<pair<int, int>> q;
    q.push({ i ,j });
    visited[i][j] = 1;

    while (!q.empty()) {
        auto cur = q.front(); q.pop();
        for (int dir = 0; dir < 4; dir++) {
            int nx = cur.x + dx[dir], ny = cur.y + dy[dir];
            if (range_over(nx, ny) || visited[nx][ny] || !board[nx][ny]) continue;
            visited[nx][ny] = 1;
            q.push({ nx, ny });
        }
    }
    ans++;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int a, b, c;
            cin >> a >> b >> c;
            board[i][j] = (a + b + c) / 3;
        }
    }
    int k;
    cin >> k;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (board[i][j] >= k) board[i][j] = 255;
            else board[i][j] = 0;
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (!visited[i][j] && board[i][j]) bfs(i, j);
        }
    }

    cout << ans;
}