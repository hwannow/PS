#include<bits/stdc++.h>
#define x first
#define y second
using namespace std;

int n, m;
int answer = 0;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> m;
    while (m--) {
        int a, b;
        cin >> a >> b;
        answer += a * b;
    }

    cout << answer / n;
}