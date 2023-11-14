#include<bits/stdc++.h>
#define x first
#define y second
using namespace std;

int n, l, r;
int board[51][51];
int dx[4] = { 1, -1, 0, 0 }, dy[4] = { 0, 0, 1, -1 };

int range_over(int nx, int ny) {
    return nx < 0 || ny < 0 || nx >= n || ny >= n;
}

int bfs(int visited[51][51], int i, int j) {
    vector<pair<int, int>> v;
    queue<pair<int, int>> q;
    q.push({ i, j });
    v.push_back({ i, j });
    visited[i][j] = 1;

    while (!q.empty()) {
        auto cur = q.front(); q.pop();
        for (int dir = 0; dir < 4; dir++) {
            int nx = dx[dir] + cur.x, ny = dy[dir] + cur.y;
            if (range_over(nx, ny) || visited[nx][ny]) continue;
            int diff = abs(board[cur.x][cur.y] - board[nx][ny]);
            if (!(diff >= l && diff <= r)) continue;
            visited[nx][ny] = 1;
            q.push({ nx, ny });
            v.push_back({ nx, ny });
        }
    }

    if (v.size() == 1) return 0;

    int sum = 0;
    for (int a = 0; a < v.size(); a++) sum += board[v[a].x][v[a].y];
    for (int a = 0; a < v.size(); a++)
        board[v[a].x][v[a].y] = sum / v.size();

    return 1;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> l >> r;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> board[i][j];

    int ans = 0;
    while (1) {
        int visited[51][51] = { 0 }, ck = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (visited[i][j] == 0) ck += bfs(visited, i, j);
            }
        }
        if (!ck) break;
        ans++;
    }
    cout << ans;
}