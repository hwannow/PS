#include<bits/stdc++.h>
#define x first
#define y second
using namespace std;

int n, m; // board ����, �ڷ���Ʈ ���� ����
int s, e; // ��ǥ ����, ���� ��ġ
vector<int> v[300005];
int visited[300005];

int range_over(int nx) {
	return nx <= 0 || nx > n;
}

int bfs() {
	queue<pair<int, int>> q;
	q.push({ e, 0 });
	visited[e] = 1;

	while (!q.empty()) {
		auto cur = q.front(); q.pop();
		int pos = cur.x, time = cur.y;
		for (auto i : { pos + 1, pos - 1 }) {
			if (range_over(i) || visited[i]) continue;
			if (i == s) return time + 1;

			q.push({ i, time + 1 });
			visited[i] = 1;
		}
		for (auto i : v[pos]) {
			if (range_over(i) || visited[i]) continue;
			if (i == s) return time + 1;

			q.push({ i, time + 1 });
			visited[i] = 1;
		}
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	cin >> n >> m;
	cin >> s >> e;
	int a, b;

	for (int i = 0; i < m; i++) {
		cin >> a >> b;
		v[a].push_back(b);
		v[b].push_back(a);
	}

	cout << bfs();

}