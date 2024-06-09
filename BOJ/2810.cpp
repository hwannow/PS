#include<bits/stdc++.h>
#define x first
#define y second
using namespace std;

int n, cup = 1;
string str;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n;
    cin >> str;

    for (int i = 0; i < str.length(); i++) {
        if (str[i] == 'S') cup++;
        else if (str[i] == 'L') {
            cup++; i++;
        }
    }

    if (n < cup) cout << n;
    else cout << cup;
}