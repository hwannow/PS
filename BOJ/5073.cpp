#include<bits/stdc++.h>
#define x first
#define y second
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    while (1) {
        vector<int> v;
        for (int i = 0; i < 3; i++) {
            int a;
            cin >> a;
            v.push_back(a);
        }
        sort(v.begin(), v.end());

        if (v[0] == 0) break;
        if (v[0] + v[1] <= v[2]) cout << "Invalid\n";
        else if (v[0] == v[1] && v[1] == v[2]) cout << "Equilateral\n";
        else if (v[0] != v[1] && v[1] != v[2] && v[0] != v[2]) cout << "Scalene\n";
        else cout << "Isosceles\n";
    }
}