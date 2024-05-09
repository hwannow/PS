#include<bits/stdc++.h>
#define x first
#define y second
using namespace std;

int n, m, answer = 1;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> m;
    n = n > m ? m : n;

    for (int i = n; i <= m; i++) {
        int sum = 0;
        for (int j = 1; j <= i; j++) {
            sum += j;
        }
        answer = answer * sum % 14579;
    }

    cout << answer;
}