#include<bits/stdc++.h>
#define x first
#define y second
using namespace std;

int  n, m;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> m;
    if (n < 2) cout << "Before";
    else if (n > 2) cout << "After";
    else if (m < 18) cout << "Before";
    else if (m > 18) cout << "After";
    else cout << "Special";
}