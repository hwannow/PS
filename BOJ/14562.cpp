#include<bits/stdc++.h>
#define x first
#define y second
using namespace std;

int n;
int a, b;

int bfs(int a, int b) {
	queue<pair<pair<int, int>, int>> q;
	q.push({ { a, b }, 0 });
	while (!q.empty()) {
		auto cur = q.front(); q.pop();

		if (cur.x.x == cur.x.y) return cur.y;
		if (cur.x.x > cur.x.y) continue;

		q.push({ {cur.x.x + 1, cur.x.y}, cur.y + 1 });
		q.push({ {cur.x.x * 2, cur.x.y + 3}, cur.y + 1 });
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	cin >> n;

	while (n--) {
		int a, b;
		cin >> a >> b;
		cout << bfs(a, b) << "\n";
	}
}