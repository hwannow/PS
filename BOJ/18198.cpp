#include<bits/stdc++.h>
#define x first
#define y second
using namespace std;

int a = 0, b = 0;
string str;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> str;

    for (int i = 0; i < str.length(); i += 2) {
        if (str[i] == 'A') a += str[i + 1] - '0';
        else b += str[i + 1] - '0';

        if (a >= 10 && b >= 10) {
            if (abs(a - b) >= 2) break;
        }
        else if (a >= 11 || b >= 11) break;

    }

    if (a > b) cout << "A";
    else cout << "B";
}