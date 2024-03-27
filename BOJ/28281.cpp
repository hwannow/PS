#include<bits/stdc++.h>
#define x first
#define y second
using namespace std;

long long n, m, answer = 1e18;
vector<long long> v;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        v.push_back(a);
    }

    for (int i = 1; i < n; i++) {
        answer = min(answer, 1LL * v[i] * m + v[i - 1] * m);
    }

    cout << answer;
}