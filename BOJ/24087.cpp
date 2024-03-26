#include<bits/stdc++.h>
#define x first
#define y second
using namespace std;

int a, b, c, answer = 250, tmp = 0;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> a >> b >> c;
    if (b < a) {
        a -= b;
        if (a % c != 0) tmp = a / c + 1;
        else tmp = a / c;

        answer += tmp * 100;
    }
    cout << answer;
}