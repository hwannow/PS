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
    cout << a + b - c << "\n";
    int tmp = 1, rememberB = b;
    while (b > 0) {
        tmp *= 10;
        b /= 10;
    }
    cout << a * tmp + rememberB - c;
}