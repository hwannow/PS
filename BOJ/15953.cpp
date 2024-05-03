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
        long answer = 0;
        cin >> a >> b;

        if (a == 0);
        else if (a == 1) answer += 5000000;
        else if (a <= 3) answer += 3000000;
        else if (a <= 6) answer += 2000000;
        else if (a <= 10) answer += 500000;
        else if (a <= 15) answer += 300000;
        else if (a <= 21) answer += 100000;

        if (b == 0);
        else if (b == 1) answer += 5120000;
        else if (b <= 3) answer += 2560000;
        else if (b <= 7) answer += 1280000;
        else if (b <= 15) answer += 640000;
        else if (b <= 31) answer += 320000;

        cout << answer << "\n";
    }
}