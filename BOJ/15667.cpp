#include<bits/stdc++.h>
#define x first
#define y second
using namespace std;

int n, ck = 0, i = 1;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n;
    while (1) {
        int tmp = 1 + i + i * i;
        if (tmp == n) break;
        i++;
    }
    cout << i;
}