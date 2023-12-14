#include<bits/stdc++.h>
#define x first
#define y second
#define INF 1e9
using namespace std;

int n, a, b, c, d;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> a >> b >> c >> d;
    int korean = a % c ? a / c + 1 : a / c;
    int math = b % d ? b / d + 1 : b / d;
    cout << n - max(korean, math);
}