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
        vector<int> v;
        for (int i = 0; i < n; i++) {
            int a;
            cin >> a;
            if (!i || v[v.size() - 1] != a) v.push_back(a);
        }
        for (int i = 0; i < v.size(); i++)
            cout << v[i] << " ";
        cout << "$\n";
    }
}