#include<bits/stdc++.h>
#define x first
#define y second
using namespace std;

int n, m, j;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> m;
    cin >> j;

    int cnt = 0;

    int start = 1, end = m;

    while (j--) {
        int a;
        cin >> a;

        while (1) {
            if (start <= a && a <= end)
                break;
            else if (start > a) {
                start--; end--; cnt++;
            }
            else {
                start++; end++; cnt++;
            }
        }
    }

    cout << cnt;
}