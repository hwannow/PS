#include<bits/stdc++.h>
#define x first
#define y second
using namespace std;

int n, answer;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        answer += a;
    }
    answer += (n - 1) * 8;

    cout << answer / 24 << " " << answer % 24;
}