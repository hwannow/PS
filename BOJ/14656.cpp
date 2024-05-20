#include<bits/stdc++.h>
#define x first
#define y second
using namespace std;

int n, cnt = 0;
int arr[20005];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n;
    for (int i = 1; i <= n; i++) cin >> arr[i];

    for (int i = 1; i <= n; i++) {
        if (arr[i] != i) cnt++;
    }
    cout << cnt;
}