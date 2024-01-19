#include<bits/stdc++.h>
#define x first
#define y second
using namespace std;

string str;
int a, b;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    while (1) {
        cin >> str >> a >> b;
        if (!str.compare("#")) break;
        if (a > 17 || b >= 80) cout << str << " Senior\n";
        else cout << str << " Junior\n";
    }

}