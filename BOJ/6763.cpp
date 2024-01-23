#include<bits/stdc++.h>
#define x first
#define y second
using namespace std;

int n, m;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> m;
    int dif = m - n;
    if (dif <= 0) cout << "Congratulations, you are within the speed limit!";
    else if (dif <= 20) cout << "You are speeding and your fine is $100.";
    else if (dif <= 30) cout << "You are speeding and your fine is $270.";
    else cout << "You are speeding and your fine is $500.";
}