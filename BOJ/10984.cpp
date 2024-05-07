#include<bits/stdc++.h>
#define x first
#define y second
using namespace std;

int n;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cout << fixed << setprecision(1);

    cin >> n;
    while (n--) {
        int a, c, sum = 0;
        double b, answer = 0;
        cin >> a;
        for (int i = 0; i < a; i++) {
            cin >> c >> b;
            answer += c * b;
            sum += c;
        }

        cout << sum << " " << answer / sum << "\n";
    }
}