#include<bits/stdc++.h>
#define x first
#define y second
using namespace std;



int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n;
	cin >> n;

	while (n--) {
		int m;
		cin >> m;
		vector<int> v(m);
		for (int i = 0; i < m; i++) cin >> v[i];
		sort(v.begin(), v.end());

		int result = result = max(result, v[1] - v[0]);
		result = max(result, v[m - 1] - v[m - 2]);

		for (int i = 0; i < m - 2; i++)
			result = max(result, v[i + 2] - v[i]);
		cout << result << "\n";
	}
}