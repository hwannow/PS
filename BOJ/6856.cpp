#include<bits/stdc++.h>
#define x first
#define y second
using namespace std;

int n, m, i;
int answer = 0;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> m;

    if (m > 10) i = 9;
    else i = m;
    for (i; i >= 1; i--) {
        if (10 - i <= n) answer++;
        else break;
    }

    if (answer == 1) cout << "There is " << answer << " way to get the sum 10.";
    else cout << "There are " << answer << " ways to get the sum 10.";
}