#include<bits/stdc++.h>
#define x first
#define y second
using namespace std;

int a, b, c;
int answer = 0, temp = 0;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> a >> b >> c;

    temp = a + b;

    while (temp / c) {
        answer += temp / c;
        temp = (temp % c) + temp / c;
    }

    cout << answer;
}