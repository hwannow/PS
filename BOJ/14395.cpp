#include<bits/stdc++.h>
#define x first
#define y second
using namespace std;

long long a, b;
set<long long> visited;
char cal[4] = { '*', '+', '-', '/' };

long long func(long long num, char ope) {
    if (ope == '+') return num + num;
    if (ope == '-') return num - num;
    if (ope == '*') return num * num;
    return num / num;
}

int range_over(long long num) {
    return num < 0 || num > 1000000001;
}

string bfs() {
    queue<pair<long long, string>> q;
    q.push({ a, "" });
    visited.insert(a);

    while (!q.empty()) {
        auto cur = q.front(); q.pop();
        for (int dir = 0; dir < 4; dir++) {
            if (cur.x == 0 && dir == 3) continue;
            long long num = func(cur.x, cal[dir]);
            if (range_over(num) || visited.count(num)) continue;
            if (num == b)
                return cur.y + cal[dir];
            visited.insert(num);
            q.push({ num, cur.y + cal[dir] });
        }
    }
    return "-1";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> a >> b;
    if (a == b) {
        cout << 0;
        return 0;
    }
    cout << bfs() << "\n";
}