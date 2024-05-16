#include<bits/stdc++.h>
#define x first
#define y second
using namespace std;

int n;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n;
    while (n--) {
        int a;
        cin >> a;
        for (int i = 0; i < a; i++) {
            for (int j = 0; j < a; j++) {
                if (i == 0 || i == a - 1) cout << "#";
                else if (j == 0 || j == a - 1) cout << "#";
                else cout << "J";
            }
            cout << "\n";
        }
        cout << "\n";
    }
}