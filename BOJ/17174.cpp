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
    answer = n;

    while (n > 0) {
        answer += n / m;
        n /= m;
    }

    cout << answer;
}