#include<bits/stdc++.h>
#define x first
#define y second
using namespace std;

int n;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    while (1) {
        cin >> n;
        if (!n) break;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j <= i; j++)
                cout << "*";
            cout << "\n";
        }
    }
}