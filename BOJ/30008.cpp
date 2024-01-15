#include<bits/stdc++.h>
#define x first
#define y second
using namespace std;

int n, m;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> m;
    while (m--) {
        int a;
        cin >> a;

        a = a * 100 / n;

        if (a <= 4) cout << "1 ";
        else if (a <= 11) cout << "2 ";
        else if (a <= 23) cout << "3 ";
        else if (a <= 40) cout << "4 ";
        else if (a <= 60) cout << "5 ";
        else if (a <= 77) cout << "6 ";
        else if (a <= 89) cout << "7 ";
        else if (a <= 96) cout << "8 ";
        else cout << "9 ";
    }
}