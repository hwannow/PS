#include<bits/stdc++.h>
#define x first
#define y second
#define INF 1e9
using namespace std;

int n, a, b, c;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n;
    while (n--) {
        cin >> a >> b >> c;
        long long answer = 0;
        for (int i = 1; i <= a; i++) {
            for (int j = 1; j <= b; j++) {
                for (int k = 1; k <= c; k++) {
                    if (i % j == j % k && j % k == k % i) answer++;
                }
            }
        }
        cout << answer << "\n";
    }
}