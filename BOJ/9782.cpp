#include<bits/stdc++.h>
#define x first
#define y second
using namespace std;

int n, cnt = 1;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cout << fixed;
    cout.precision(1);

    while (1) {
        float a;
        vector<float> v;
        cin >> n;
        if (!n) break;
        for (int i = 0; i < n; i++) {
            cin >> a;
            v.push_back(a);
        }
        if (n % 2)
            cout << "Case " << cnt << ": " << v[n / 2] << "\n";
        else
            cout << "Case " << cnt << ": " << (v[n / 2 - 1] + v[n / 2]) / 2 << "\n";
        cnt++;
    }
}