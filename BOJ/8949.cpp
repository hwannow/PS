#include<bits/stdc++.h>
#define x first
#define y second
using namespace std;

int n, m, idx = 0;
int arr[10];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> m;
    while (1) {
        if (n == 0 && m == 0) break;
        arr[idx++] = n % 10 + m % 10;
        n /= 10; m /= 10;
    }

    for (int i = idx - 1; i >= 0; i--)
        cout << arr[i];
}