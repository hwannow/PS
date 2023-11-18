#include<bits/stdc++.h>
#define x first
#define y second
using namespace std;

int n, m;
int visited[4000005];

int bfs() {
    memset(visited, 0, sizeof(visited));
    queue<pair<int, int>> q;
    q.push({ 1, 0 });
    visited[1] = 1;

    while (1) {
        auto cur = q.front(); q.pop();
        for (auto i : { cur.x, -1 }) {
            int nx = cur.x + i;
            if (nx <= 0 || nx > 4000000 || visited[nx]) continue;
            if (nx == m) return cur.y + 1;
            q.push({ nx, cur.y + 1 });
            visited[nx] = 1;
        }
    }
    return -1;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n;
    while (n--) {
        cin >> m;
        if (m == 1) cout << 0 << "\n";
        else {
            int bf = bfs();
            if (bf == -1) cout << "Wrong proof!\n";
            else cout << bf << "\n";
        }
    }
}