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
        int a, b;
        cin >> a >> b;

        cout << a / b + (a % b != 0 ? 1 : 0) << "\n";
    }
}