#include<bits/stdc++.h>
#define x first
#define y second
using namespace std;

float a, b, c;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> a >> b;
    c = a / (b * b);

    if (c > 25) cout << "Overweight";
    else if (c > 18.5) cout << "Normal weight";
    else cout << "Underweight";
}