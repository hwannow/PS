#include<bits/stdc++.h>
#define x first
#define y second
using namespace std;

int a, b, c;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> a >> b >> c;

    if (b <= a && a <= c) cout << a;
    else if (b >= a) cout << b;
    else cout << c;
}