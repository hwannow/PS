#include<bits/stdc++.h>
#define x first
#define y second
using namespace std;

string str;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> str;
    cout << str[0];

    for (int i = 1; i < str.length(); i++) {
        if (str[i - 1] != str[i]) cout << str[i];
    }
}