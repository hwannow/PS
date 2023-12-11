#include<bits/stdc++.h>
#define x first
#define y second
#define INF 1e9
using namespace std;

int a, b, c;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> a >> b >> c;
    if (a > b && b > c || c > b && b > a) cout << b;
    else if (a > c && c > b || b > c && c > a) cout << c;
    else cout << a;
}