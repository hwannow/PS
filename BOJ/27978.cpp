#include<bits/stdc++.h>
#define x first
#define y second
#define INF 1e9
using namespace std;

int n, m;
pair<int, int> start;
pair<int, int> bomul;
int visited[501][501];
char board[501][501];
int dx[8] = { -1, 0, 1, 1, 1, 0, -1, -1 }, dy[8] = { 1, 1, 1, 0, -1, -1, -1, 0 };

int range_over(int nx, int ny) {
    return nx < 0 || ny < 0 || nx >= n || ny >= m;
}

void bfs() {
    queue<pair<pair<int, int>, int>> q;
    q.push({ start, 0 });
    visited[start.x][start.y] = 0;

    while (!q.empty()) {
        auto cur = q.front(); q.pop();
        for (int dir = 0; dir < 3; dir++) {
            int nx = cur.x.x + dx[dir], ny = cur.x.y + dy[dir];
            if (range_over(nx, ny) || visited[nx][ny] <= cur.y || board[nx][ny] == '#') continue;
            visited[nx][ny] = cur.y;
            q.push({ {nx, ny}, cur.y });
        }
        for (int dir = 3; dir < 8; dir++) {
            int nx = cur.x.x + dx[dir], ny = cur.x.y + dy[dir];
            if (range_over(nx, ny) || visited[nx][ny] <= cur.y + 1 || board[nx][ny] == '#') continue;
            visited[nx][ny] = cur.y + 1;
            q.push({ {nx, ny}, cur.y + 1 });
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
            visited[i][j] = INF;
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> board[i][j];
            if (board[i][j] == 'K') {
                start.x = i, start.y = j;
            }
            else if (board[i][j] == '*') {
                bomul.x = i, bomul.y = j;
            }
        }
    }
    bfs();
    if (visited[bomul.x][bomul.y] == INF) cout << -1;
    else cout << visited[bomul.x][bomul.y];
}