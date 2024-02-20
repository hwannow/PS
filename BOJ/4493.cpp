#include<bits/stdc++.h>
#define x first
#define y second
using namespace std;

int n, m;
char a, b;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n;
    while (n--) {
        int one = 0, two = 0;
        cin >> m;
        while (m--) {
            cin >> a >> b;
            if (a == 'R' && b == 'S') one++;
            else if (a == 'R' && b == 'P') two++;
            else if (a == 'S' && b == 'P') one++;
            else if (a == 'S' && b == 'R') two++;
            else if (a == 'P' && b == 'R') one++;
            else if (a == 'P' && b == 'S') two++;
        }
        if (one == two) cout << "TIE\n";
        else if (one < two) cout << "Player 2\n";
        else cout << "Player 1\n";
    }
}