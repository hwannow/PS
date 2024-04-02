#include<bits/stdc++.h>
#define x first
#define y second
using namespace std;

int a, b, c;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> a >> b >> c;
    for (int i = 0; i < a; i++) {
        cout << "*";
        for (int j = 0; j < 2; j++) {
            for (int k = 0; k < b; k++)
                cout << " ";
            cout << "*";
        }
        cout << "\n";
    }

    for (int i = 0; i < 3 + b * 2; i++) cout << "*";
    cout << "\n";

    for (int i = 0; i < c; i++) {
        for (int j = 0; j < b + 1; j++)
            cout << " ";
        cout << "*\n";
    }
}