#include<bits/stdc++.h>
#define x first
#define y second
using namespace std;

int n;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cout.precision(2);
    cout << fixed;

    cin >> n;
    while (n--) {
        int a, b, c, d, e;
        cin >> a >> b >> c >> d >> e;
        float answer = 0.0;
        answer += a * 350.34 + b * 230.90 + c * 190.55 + d * 125.30 + e * 180.90;
        cout << "$" << answer << "\n";
    }
}