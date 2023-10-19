#include<bits/stdc++.h>
#define x first
#define y second
using namespace std;

int n;
vector<int> v;
int small = 0, big = 0;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	cin >> n;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		v.push_back(a);
	}
	sort(v.begin(), v.end());

	for (int i = 0; i < n / 2; i++) {
		small += v[i];
		big += v[i];
	}

	for (int i = n / 2; i < n; i++)
		big += v[i];

	cout << small << " " << big - small;
}