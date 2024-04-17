#include<bits/stdc++.h>
#define x first
#define y second
using namespace std;

int n;
string str = "SciComLove";

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n;
    if (n % 2)
        reverse(str.begin(), str.end());

    cout << str;
}