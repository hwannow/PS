#include<bits/stdc++.h>
#define x first
#define y second
#define INF 1e9
using namespace std;

int n;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n;
    if (n % 5) cout << n / 5 + 1;
    else cout << n / 5;
}