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
    for (int j = 1; j <= n; j++) {
        vector<int> v;
        for (int i = 0; i < 5; i++) {
            int a;
            cin >> a;
            v.push_back(a);
        }
        cout << "Case #" << j << ": " << *max_element(v.begin(), v.end()) << "\n";
    }
}