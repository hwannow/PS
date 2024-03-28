#include<bits/stdc++.h>
#define x first
#define y second
using namespace std;

int a, b, c;
char op, eq;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> a; getchar();
    cin >> op >> b; getchar();
    cin >> eq >> c;

    if (a + b == c) cout << "YES";
    else cout << "NO";
}