#include<bits/stdc++.h>
#define x first
#define y second
using namespace std;

int dx[4] = { -1, 0, 0, 1 }, dy[4] = { 0, -1, 1, 0 };
int board[22][22], n, sz = 2, eat = 0, answer = 0;
pair<int, int> shark; // 상어의 위치

int range_over(int a, int b) {
    if (a < 0 || a >= n || b < 0 || b >= n) return 1;
    return 0;
}

int bfs() {
    pair<int, int> fish = make_pair(n, n);
    int eat_time = 1e9;
    queue<pair<pair<int, int>, int>> q;
    int visited[22][22] = { 0 };
    q.push({ shark, 0 });
    board[shark.x][shark.y] = 0;
    visited[shark.x][shark.y] = 0;
    while (!q.empty()) {
        pair<int, int> cur = q.front().x;
        int t = q.front().y; q.pop();

        for (int i = 0; i < 4; i++) {
            int nx = cur.x + dx[i], ny = cur.y + dy[i];
            if (range_over(nx, ny) || visited[nx][ny]) continue;
            if (board[nx][ny] && board[nx][ny] < sz) {
                if (t <= eat_time) {
                    if (fish.x > nx || (fish.x == nx && fish.y > ny)) {
                        fish = { nx, ny };
                        eat_time = t;
                    }
                }
                else {
                    shark = { fish.x, fish.y };
                    return eat_time + 1;
                }
            }
            else if (!board[nx][ny] || board[nx][ny] == sz) {
                q.push({ {nx, ny}, t + 1 });
                visited[nx][ny] = 1;
            }
        }
    }
    if (fish != make_pair(n, n)) {
        shark = { fish.x, fish.y };
        return eat_time + 1;
    }
    return 0;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> board[i][j];
            if (board[i][j] == 9) {
                shark = make_pair(i, j);
            }
        }
    }

    while (1) {
        int ck = bfs();
        if (ck) {
            answer += ck;
            eat++;
            if (eat == sz) {
                sz++;
                eat = 0;
            }
        }
        else break;
    }
    cout << answer;
}