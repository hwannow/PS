#include<bits/stdc++.h>
#define x first
#define y second
using namespace std;

int n, answer = 0;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    while (1) {
        cin >> n;
        if (cin.eof()) break;

        if (n > 0) answer++;
    }

    cout << answer;

}