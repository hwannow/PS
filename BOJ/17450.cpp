#include<bits/stdc++.h>
#define x first
#define y second
using namespace std;

float a, b;
float value = 0.0;
char answer;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> a >> b;
    b *= 10, a *= 10;
    if (a >= 5000) a -= 500;
    value = b / a; answer = 'S';

    cin >> a >> b;
    b *= 10, a *= 10;
    if (a >= 5000) a -= 500;
    if (b / a > value) {
        answer = 'N';
        value = b / a;
    }

    cin >> a >> b;
    b *= 10, a *= 10;
    if (a >= 5000) a -= 500;
    if (b / a > value) {
        answer = 'U';
    }

    cout << answer;
}