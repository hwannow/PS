#include<bits/stdc++.h>
#define x first
#define y second
using namespace std;

string s;
int k = 0, p = 0, ans = 0;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> s;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'K') {
            k++;
            if (p > 0) p--;
        }
        else {
            p++;
            if (k > 0) k--;
        }
        ans = k + p;
    }

    cout << ans;
}