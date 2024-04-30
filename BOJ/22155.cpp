#include<bits/stdc++.h>
#define x first
#define y second
using namespace std;

int n;
int a, b;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n;
    while (n--) {
        cin >> a >> b;
        if (a <= 2 && b <= 1) cout << "Yes\n";
        else if (a <= 1 && b <= 2) cout << "Yes\n";
        else cout << "No\n";
    }
}