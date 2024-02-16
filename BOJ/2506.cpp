#include<bits/stdc++.h>
#define x first
#define y second
using namespace std;

int n, answer = 0, score = 0, tmp;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n;
    while (n--) {
        cin >> tmp;
        if (!tmp) score = 0;
        else
            answer += ++score;
    }
    cout << answer;
}