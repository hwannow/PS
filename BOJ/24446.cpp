#include<bits/stdc++.h>
#define x first
#define y second
using namespace std;

int n, m, r;
vector<int> v[100005];
int visited[100005];

void bfs() {
    queue<int> q;
    q.push(r);
    visited[r] = 1;

    while (!q.empty()) {
        auto cur = q.front(); q.pop();
        for (int i = 0; i < v[cur].size(); i++) {
            int nx = v[cur][i];
            if (visited[nx] || nx == r) continue;
            q.push(nx);
            visited[nx] = visited[cur] + 1;
        }
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> m >> r;
    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }

    bfs();

    for (int i = 1; i <= n; i++)
        cout << visited[i] - 1 << "\n";
}