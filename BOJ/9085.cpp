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
        int m, sum = 0, tmp = 0;
        cin >> m;
        while (m--) {
            cin >> tmp;
            sum += tmp;
        }
        cout << sum << "\n";
    }
}