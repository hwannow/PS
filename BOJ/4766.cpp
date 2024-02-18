#include<bits/stdc++.h>
#define x first
#define y second
using namespace std;

double n, m;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cout << fixed;
    cout.precision(2);

    cin >> n;
    while (1) {
        cin >> m;
        if (m == 999) break;
        cout << m - n << "\n";
        n = m;
    }

}