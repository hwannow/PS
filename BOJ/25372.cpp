#include<bits/stdc++.h>
#define x first
#define y second
#define INF 1e9
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    while (n--) {
        string str;
        cin >> str;
        if (str.length() >= 6 && str.length() <= 9) cout << "yes\n";
        else cout << "no\n";
    }
}