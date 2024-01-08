#include<bits/stdc++.h>
#define x first
#define y second
using namespace std;

int n, arr[101], ans = 0;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n;
    vector<pair<int, int>> v;
    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        v.push_back({ a, b });
    }
    sort(v.begin(), v.end());

    arr[0] = 1;
    for (int i = 1; i < n; i++) {
        arr[i] = 1;
        for (int j = 0; j < i; j++) {
            if (v[i].y > v[j].y && arr[j] >= arr[i]) arr[i] = arr[j] + 1;
        }
        ans = max(ans, arr[i]);
    }
    cout << n - ans;
}