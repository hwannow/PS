#include<bits/stdc++.h>
#define x first
#define y second
using namespace std;

int n;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n;
    while (n--) {
        string str;
        cin >> str;

        int len = str.length();

        if (str[len / 2] == str[len / 2 - 1]) cout << "Do-it\n";
        else cout << "Do-it-Not\n";
    }
}