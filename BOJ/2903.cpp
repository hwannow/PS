#include<bits/stdc++.h>
#define x first
#define y second
using namespace std;

int n, m = 2;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n;
    while (n--) m = m + m - 1;
    cout << m * m;
}
/*
0 -> 2 * 2
1 -> 3 * 3 -> 2 + (2 - 1)
2 -> 5 * 5 -> 3 + (3 - 1)
3 -> 9 * 9 -> 5 + (5 - 1)
...
*/