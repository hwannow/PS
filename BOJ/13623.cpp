#include<bits/stdc++.h>
#define x first
#define y second
using namespace std;

int isSame(int a, int b) {
    return a == b;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int a, b, c;
    cin >> a >> b >> c;

    if (isSame(a, b) && !isSame(b, c)) cout << "C";
    else if (isSame(a, c) && !isSame(a, b)) cout << "B";
    else if (isSame(b, c) && !isSame(a, b)) cout << "A";
    else cout << "*";
}