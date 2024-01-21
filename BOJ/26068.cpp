#include<bits/stdc++.h>
#define x first
#define y second
using namespace std;

char a, b;
int c, n, answer = 0;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n;
    while (n--) {
        cin >> a >> b >> c;

        if (c <= 90) answer++;
    }
    cout << answer;
}