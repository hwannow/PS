#include<bits/stdc++.h>
#define x first
#define y second
using namespace std;

int n, sum = 0, m, nine = 9;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n;
    while (nine--) {
        cin >> m;
        sum += m;
    }

    cout << n - sum;
}