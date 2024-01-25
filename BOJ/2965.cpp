#include<bits/stdc++.h>
#define x first
#define y second
using namespace std;

int a, b, c;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> a >> b >> c;
    int answer = max(b - a - 1, c - b - 1);
    cout << answer;
}