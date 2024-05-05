#include<bits/stdc++.h>
#define x first
#define y second
using namespace std;

int n, t;
int answer = 0;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> t;
    while (n--) {
        int a;
        cin >> a;
        if (t - a >= 0) {
            answer++;
            t -= a;
        }
        else break;
    }

    cout << answer;
}