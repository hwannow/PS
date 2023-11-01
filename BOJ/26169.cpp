#include<bits/stdc++.h>
using namespace std;

int board[6][6];
int a, b, ans = 0;
int visited[6][6];
int dx[4] = { 1, -1, 0, 0 }, dy[4] = { 0 ,0, 1, -1 };

int range_over(int x, int y) {
    return x < 0 || y < 0 || x >= 5 || y >= 5;
}

void dfs(int x, int y, int cnt, int apple) {
    if (cnt == 3) {
        if (apple >= 2) ans = 1;
        return;
    }
    int ap = apple;
    for (int dir = 0; dir < 4; dir++) {
        int nx = x + dx[dir], ny = y + dy[dir];
        if (range_over(nx, ny) || visited[nx][ny] || board[nx][ny] == -1) continue;
        visited[nx][ny] = 1;
        if (board[nx][ny] == 1)
            dfs(nx, ny, cnt + 1, ap + 1);
        else
            dfs(nx, ny, cnt + 1, ap);
        visited[nx][ny] = 0;
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++)
            cin >> board[i][j];
    }

    cin >> a >> b;
    visited[a][b] = 1;
    dfs(a, b, 0, 0);
    cout << ans;
}