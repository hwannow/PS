#include<bits/stdc++.h>
#define x first
#define y second
using namespace std;

int n;
int tmp = 1, cnt = 0;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n;
    while (n >= 10) {
        while (n > 0) {
            tmp *= n % 10;
            n /= 10;
        }
        cnt++;
        n = tmp; tmp = 1;
    }
    cout << cnt;
}