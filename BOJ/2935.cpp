#include<bits/stdc++.h>
#define x first
#define y second
using namespace std;

string a, b, answer = "1";
char c;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> a >> c >> b;
    int alen = a.length();
    int blen = b.length();

    if (c == '+') {
        if (alen < blen) {
            for (int i = blen; i >= 1; i--) {
                if (i == alen) cout << answer;
                else cout << b[blen - i];
            }
        }
        else {
            if (alen == blen) answer = "2";
            for (int i = alen; i >= 1; i--) {
                if (i == blen) cout << answer;
                else cout << a[alen - i];
            }
        }
    }
    else {
        int len = alen + blen - 2;
        cout << "1";
        while (len--) cout << "0";
    }
}