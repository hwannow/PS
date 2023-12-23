#include<bits/stdc++.h>
#define x first
#define y second
#define INF 1e9
using namespace std;

int main() {


    int n, m;

    while (scanf_s("%d %d", &n, &m) != EOF) {
        int ans = 0, coupon = 0;
        while (n > 0) {
            ans += n;
            coupon += n;
            n = coupon / m;
            coupon -= n * m;
        }
        cout << ans << "\n";
    }
}