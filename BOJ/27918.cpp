#include<bits/stdc++.h>
#define x first
#define y second
#define INF 1e9
using namespace std;

int n, a = 0, b = 0;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n;
    while (n--) {
        char c;
        cin >> c;
        if (c == 'D') a++;
        else  b++;
        if (abs(a - b) >= 2) break;
    }
    cout << a << ":" << b;
}