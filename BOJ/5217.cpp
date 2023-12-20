#include<bits/stdc++.h>
#define x first
#define y second
#define INF 1e9
using namespace std;

int n, m;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n;
    while (n--) {
        cin >> m;
        cout << "Pairs for " << m << ": ";
        int flag = 0;
        for (int i = 1; i <= m / 2; i++) {
            for (int j = i + 1; j <= m; j++) {
                if (i != j && i + j == m) {
                    if (flag) cout << ", " << i << " " << j;
                    else cout << i << " " << j;
                    flag = 1;
                }
            }
        }
        cout << "\n";
    }
}