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
    b = max(a - b, b);
    c = max(a - c, c);
    cout << b * c * 4;
}