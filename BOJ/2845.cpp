#include<bits/stdc++.h>
#define x first
#define y second
#define INF 1e9
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, m;
    cin >> n >> m;
    n *= m;
    for (int i = 0; i < 5; i++) {
        cin >> m;
        cout << m - n << " ";
    }
}