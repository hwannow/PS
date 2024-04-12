#include<bits/stdc++.h>
#define x first
#define y second
using namespace std;

int a;
int answer = 1, ck = 0, answer2 = 1;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    for (int i = 0; i < 3; i++) {
        cin >> a;
        if (a % 2) {
            answer *= a; ck = 1;
        }
        answer2 *= a;
    }

    if (!ck) answer = answer2;

    cout << answer;
}