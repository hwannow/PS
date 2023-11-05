#include<bits/stdc++.h>
#define x first
#define y second
using namespace std;

int board[6][6];
int visited[6][6];
pair<int, int> start;
int dx[4] = { 1, -1, 0,0 }, dy[4] = { 0,0,1,-1 };

int range_over(int nx, int ny) {
    return nx < 0 || ny < 0 || nx >= 5 || ny >= 5;
}

int bfs() {
    queue<pair<int, int>> q;
    q.push(start);
    visited[start.x][start.y] = 1;

    while (!q.empty()) {
        auto cur = q.front(); q.pop();
        for (int dir = 0; dir < 4; dir++) {
            int nx = cur.x + dx[dir], ny = cur.y + dy[dir];
            if (range_over(nx, ny) || visited[nx][ny] || board[nx][ny] == -1) continue;
            if (board[nx][ny] == 1) return visited[cur.x][cur.y];
            visited[nx][ny] = visited[cur.x][cur.y] + 1;
            q.push({ nx, ny });
        }
    }
    return -1;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++)
            cin >> board[i][j];
    }

    cin >> start.x >> start.y;

    cout << bfs();
}