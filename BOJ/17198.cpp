#include<bits/stdc++.h>
#define x first
#define y second
using namespace std;

char board[11][11];
pair<int, int> lake;
int visited[11][11];
int dx[4] = { 1, -1, 0, 0 }, dy[4] = { 0, 0, 1, -1 };

int range_over(int i, int j) {
    return i < 0 || j < 0 || i >= 10 || j >= 10;
}

void bfs() {
    queue<pair<int, int>> q;
    q.push(lake);
    visited[lake.x][lake.y] = 1;

    while (!q.empty()) {
        auto cur = q.front(); q.pop();
        for (int dir = 0; dir < 4; dir++) {
            int nx = cur.x + dx[dir], ny = cur.y + dy[dir];
            if (range_over(nx, ny) || visited[nx][ny] || board[nx][ny] == 'R') continue;

            if (board[nx][ny] == 'B') {
                cout << visited[cur.x][cur.y] - 1;
                return;
            }
            visited[nx][ny] = visited[cur.x][cur.y] + 1;
            q.push({ nx, ny });
        }
    }
    return;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            cin >> board[i][j];
            if (board[i][j] == 'L') lake = make_pair(i, j);
        }
        getchar();
    }

    bfs();
}