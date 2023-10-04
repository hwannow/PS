#include<bits/stdc++.h>
#define x first
#define y second
using namespace std;

int a, b, c, d;
int n, m;
int visited[1001];
vector<int> v[1001];

int bfs() {
	queue<int> q;
	q.push(a);
	visited[a] = 1;
	while (!q.empty()) {
		auto cur = q.front(); q.pop();
		for (int i = 0; i < v[cur].size(); i++) {
			if (visited[v[cur][i]]) continue;
			if (v[cur][i] == b) return visited[cur];
			visited[v[cur][i]] = visited[cur] + 1;
			q.push(v[cur][i]);
		}
	}
	return -1;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	cin >> a >> b;
	cin >> n >> m;
	for (int i = 0; i < m; i++) {
		cin >> c >> d;
		v[c].push_back(d);
		v[d].push_back(c);
	}

	if (a == b) {
		cout << 0;
		return 0;
	}
	cout << bfs();
}