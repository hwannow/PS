#include<bits/stdc++.h>
#define x first
#define y second
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cout.precision(2);
    cout << fixed;

    double n;
    while (1) {
        cin >> n;
        if (n == -1) break;
        cout << "Objects weighing " << n << " on Earth will weigh " << n * 0.167 << " on the moon.\n";
    }
}