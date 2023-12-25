#include<bits/stdc++.h>
#define x first
#define y second
#define INF 1e9
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    vector<int> v;
    for (int i = 0; i < 4; i++) {
        int a;
        cin >> a;
        v.push_back(a);
    }

    sort(v.begin(), v.end());
    cout << abs(v[0] + v[3] - v[1] - v[2]);
}