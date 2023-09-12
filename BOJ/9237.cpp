#include<bits/stdc++.h>
#define x first
#define y second
using namespace std;

int n;
vector<int> v;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	cin >> n;
	int a;
	for (int i = 0; i < n; i++) {
		cin >> a;
		v.push_back(a);
	}
	sort(v.rbegin(), v.rend());

	int days = 0;
	for (int i = 0; i < n; i++)
		days = max(days, v[i] + i + 1);

	cout << days + 1;

}