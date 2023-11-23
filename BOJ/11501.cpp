#include<bits/stdc++.h>
#define x first
#define y second
#define INF 1e9
using namespace std;


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    while (n--) {
        int m;
        vector<int> v;
        cin >> m;
        for (int i = 0; i < m; i++) {
            int a;
            cin >> a;
            v.push_back(a);
        }

        long long res = 0;
        int MAX = -1;

        for (int i = m - 1; i >= 0; i--) {
            MAX = max(MAX, v[i]);
            res += MAX - v[i];
        }

        cout << res << "\n";
    }
}