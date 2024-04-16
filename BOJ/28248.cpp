#include<bits/stdc++.h>
#define x first
#define y second
using namespace std;

int n, m, answer = 0;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> m;
    answer += n * 50;
    answer -= m * 10;
    if (n > m) answer += 500;
    cout << answer;
}