#include<bits/stdc++.h>
#define x first
#define y second
using namespace std;

int n, m, ck = 0, ck2 = 0;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);


    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        long long a, b;
        cin >> a >> b;
        if (a != b) ck = 1;
    }
    for (int i = 0; i < m; i++) {
        long long a, b;
        cin >> a >> b;
        if (a != b) ck2 = 1;
    }

    if (!ck && !ck2) cout << "Accepted";
    else if (ck == 1) cout << "Wrong Answer";
    else cout << "Why Wrong!!!";
}