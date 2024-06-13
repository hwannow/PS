#include<bits/stdc++.h>
//#define x first
//#define y second
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    while (1) {
        string str;
        cin >> str;

        if (!str.compare("#")) break;

        int y = 0, n = 0, p = 0, a = 0;

        y = count(str.begin(), str.end(), 'Y');
        n = count(str.begin(), str.end(), 'N');
        p = count(str.begin(), str.end(), 'P');
        a = count(str.begin(), str.end(), 'A');

        int st = str.length() / 2;
        if (str.length() % 2) st++;

        if (a >= st) cout << "need quorum\n";
        else if (y > n) cout << "yes\n";
        else if (n > y) cout << "no\n";
        else cout << "tie\n";
    }
}