#include<bits/stdc++.h>
#define x first
#define y second
using namespace std;

int n;
int answer = 0;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = 0; j <= i; j++)
            answer += i + j;
    }

    cout << answer;
}