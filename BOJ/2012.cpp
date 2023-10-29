#include<bits/stdc++.h>
#define x first
#define y second
using namespace std;

int n;
long long ans = 0;
vector<int> v;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);


    cin >> n;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        v.push_back(a);
    }

    sort(v.begin(), v.end());

    for (int i = 0; i < n; i++)
        ans += abs(v[i] - i - 1);


    cout << ans;
}