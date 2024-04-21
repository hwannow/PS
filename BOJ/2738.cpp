#include<bits/stdc++.h>
#define x first
#define y second
using namespace std;

int n, m;
int a[105][105], b[105][105];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++)
            cin >> a[i][j];
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++)
            cin >> b[i][j];
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++)
            cout << a[i][j] + b[i][j] << " ";
        cout << "\n";
    }
}