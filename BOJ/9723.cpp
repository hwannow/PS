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
    for (int i = 1; i <= n; i++) {
        vector<int> v;
        for (int i = 0; i < 3; i++) {
            int a;
            cin >> a;
            v.push_back(a);
        }
        sort(v.begin(), v.end());
        string answer = "";
        if (v[0] * v[0] + v[1] * v[1] == v[2] * v[2]) answer = "YES\n";
        else answer = "NO\n";

        cout << "Case #" << i << ": " << answer;
    }
}