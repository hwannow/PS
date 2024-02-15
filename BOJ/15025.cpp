#include<bits/stdc++.h>
#define x first
#define y second
using namespace std;

int n, m;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> m;
    if (!n && !m) cout << "Not a moose";
    else if (n == m) cout << "Even " << n * 2;
    else if (n < m) cout << "Odd " << m * 2;
    else if (n > m) cout << "Odd " << n * 2;
}