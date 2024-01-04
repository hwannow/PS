#include<bits/stdc++.h>
#define x first
#define y second
#define INF 1e9
using namespace std;

int n, a, b;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> a >> b;
    int answer = 0;
    while (a > 1 && n) {
        n--;
        a -= 2;
        answer++;
    }
    while (b >= 1 && n) {
        n--;
        b -= 1;
        answer++;
    }
    cout << answer;
}