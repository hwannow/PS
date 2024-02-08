#include<bits/stdc++.h>
#define x first
#define y second
using namespace std;

float n, m;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    while (1) {
        cin >> n >> m;
        if (!n && !m) {
            cout << "AXIS";
            break;
        }

        if (!n || !m) cout << "AXIS\n";
        else if (n > 0 && m > 0) cout << "Q1\n";
        else if (n < 0 && m > 0) cout << "Q2\n";
        else if (n < 0 && m < 0) cout << "Q3\n";
        else cout << "Q4\n";
    }

}