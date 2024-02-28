#include<bits/stdc++.h>
#define x first
#define y second
using namespace std;

int n, m, answer = 0;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n;
    while (n--) {
        cin >> m;
        if (answer < m) answer = m;
    }
    cout << answer;
}