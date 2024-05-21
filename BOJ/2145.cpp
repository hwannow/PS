#include<bits/stdc++.h>
#define x first
#define y second
using namespace std;

int n;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    while (1) {
        cin >> n;
        if (!n) break;


        int sum = 10;
        while (sum >= 10) {
            sum = 0;
            while (n > 0) {
                sum += n % 10;
                n /= 10;
            }
            n = sum;
        }

        cout << sum << "\n";
    }
}