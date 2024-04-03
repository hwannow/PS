#include<bits/stdc++.h>
#define x first
#define y second
using namespace std;

int n, m, num = 1, MAX = 0;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        int tmp = num, ck = 1;
        while (tmp) {
            if (tmp % 10 == m) {
                ck = 0; break;
            }
            tmp /= 10;
        }
        if (!ck) i--;
        else MAX = num;
        num++;
    }

    cout << MAX;
}