#include<bits/stdc++.h>
#define x first
#define y second
using namespace std;

int n, m;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n;
    while (n--) {
        cin >> m;

        if (m >= 300) cout << "1 ";
        else if (m >= 275) cout << "2 ";
        else if (m >= 250) cout << "3 ";
        else cout << "4 ";
    }
}