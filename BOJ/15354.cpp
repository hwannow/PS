#include<bits/stdc++.h>
#define x first
#define y second
using namespace std;

int n, answer = 2;
char ch, c;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n;
    cin >> ch;
    for (int i = 1; i < n; i++) {
        cin >> c;
        if (c == ch) continue;
        else {
            answer++;
            ch = c;
        }
    }
    cout << answer;
}