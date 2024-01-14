#include<bits/stdc++.h>
#define x first
#define y second
using namespace std;

int n, a, b;
int ans = 0;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n;
    while (n--) {
        cin >> a >> b;
        if (a == 136) ans += 1000;
        else if (a == 142) ans += 5000;
        else if (a == 148) ans += 10000;
        else if (a == 154)ans += 50000;
    }

    cout << ans;
}