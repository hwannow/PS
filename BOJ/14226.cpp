#include<bits/stdc++.h>
#define x first
#define y second
using namespace std;

int n;
int visited[2001][2001];

int bfs() {
	queue<tuple<int, int, int>> q;
	q.push({ 1, 0, 0 });
	while (!q.empty()) {
		auto cur = q.front(); q.pop();
		int screen = get<0>(cur), clip = get<1>(cur), time = get<2>(cur);

		if (screen == n) return time;

		if (screen && !visited[screen][screen]) {
			q.push({ screen, screen, time + 1 });
			visited[screen][screen] = 1;
		}

		if (clip && screen + clip <= 2000 && !visited[screen + clip][clip]) {
			q.push({ screen + clip, clip, time + 1 });
			visited[screen + clip][clip] = 1;
		}

		if (screen - 1 >= 0 && !visited[screen - 1][clip]) {
			q.push({ screen - 1 , clip, time + 1 });
			visited[screen - 1][clip] = 1;
		}
	}
}


int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	cin >> n;

	cout << bfs();
}