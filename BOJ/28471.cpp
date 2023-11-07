#include<bits/stdc++.h>
#define x first
#define y second
using namespace std;

int n, ans = 0;
char board[2001][2001];
int visited[2001][2001];
pair<int, int> start;
int dx[7] = { -1, -1, -1, 0, 0, 1, 1 }, dy[7] = { -1, 0, 1, -1, 1, 1, -1 };

int range_over(int nx, int ny) {
    return nx < 0 || ny < 0 || nx >= n || ny >= n;
}

void bfs() {
    queue<pair<int, int>> q;
    q.push(start);
    visited[start.x][start.y] = 1;

    while (!q.empty()) {
        auto cur = q.front(); q.pop();
        for (int dir = 0; dir < 7; dir++) {
            int nx = cur.x + dx[dir], ny = cur.y + dy[dir];
            if (range_over(nx, ny) || visited[nx][ny] || board[nx][ny] == '#') continue;
            visited[nx][ny] = 1;
            ans++;
            q.push({ nx, ny });
        }
    }
    cout << ans;
    return;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> board[i][j];
            if (board[i][j] == 'F') start = make_pair(i, j);
        }
    }

    bfs();
}