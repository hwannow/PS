#include<bits/stdc++.h>
#define x first
#define y second
using namespace std;

int n, m;
int MAX = 0;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> m; MAX = m;
    while (n--) {
        int a, b;
        cin >> a >> b;
        m = m + a - b;
        if (m < 0) {
            MAX = 0;
            break;
        }
        if (MAX < m) MAX = m;
    }

    cout << MAX;
}