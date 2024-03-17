#include<bits/stdc++.h>
#define x first
#define y second
using namespace std;

int n, ck = 0;
string str;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> str;
    char c = str[0];
    for (int i = 1; i < str.length(); i++) {
        if (str[i] != c) {
            ck = 1; break;
        }
    }
    if (ck) cout << "No";
    else cout << "Yes";
}