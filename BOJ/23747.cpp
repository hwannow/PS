#include<bits/stdc++.h>
#define x first
#define y second
using namespace std;

int n, m, a, b;
int dx[4] = { 1, -1, 0, 0 }, dy[4] = { 0, 0, 1, -1 };
char board[1001][1001], visited[5001][5001];
string str;

int range_over(int nx, int ny) {
    return nx < 0 || ny < 0 || nx >= n || ny >= m;
}

void bfs(int i, int j) {
    char ch = board[i][j];
    queue<pair<int, int>> q;
    q.push({ i ,j });
    visited[i][j] = '.';

    while (!q.empty()) {
        auto cur = q.front(); q.pop();
        for (int dir = 0; dir < 4; dir++) {
            int nx = cur.x + dx[dir], ny = cur.y + dy[dir];
            if (range_over(nx, ny) || visited[nx][ny] == '.' || board[nx][ny] != ch) continue;
            visited[nx][ny] = '.';
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
        for (int j = 0; j < m; j++) {
            cin >> board[i][j];
            visited[i][j] = '#';
        }
    }

    cin >> a >> b;
    cin >> str;
    a--, b--;

    for (int i = 0; i < str.length(); i++) {
        if (str[i] == 'L') b--;
        else if (str[i] == 'R') b++;
        else if (str[i] == 'U') a--;
        else if (str[i] == 'D') a++;
        else bfs(a, b);
    }

    visited[a][b] = '.';
    for (int dir = 0; dir < 4; dir++) {
        int nx = a + dx[dir], ny = b + dy[dir];
        visited[nx][ny] = '.';
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++)
            cout << visited[i][j];
        cout << "\n";
    }
}