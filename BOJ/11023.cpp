#include<bits/stdc++.h>
#define x first
#define y second
using namespace std;

int n, sum = 0;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    while (1) {
        cin >> n;
        if (cin.eof()) break;
        sum += n;
    }

    cout << sum;
}