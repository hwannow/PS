#include<bits/stdc++.h>
#define x first
#define y second
using namespace std;

int n;
string str;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n;
    cin >> str;

    int len = str.length();

    if (str[len - 1] == 'G') cout << str.substr(0, len - 1);
    else cout << str << 'G';

}