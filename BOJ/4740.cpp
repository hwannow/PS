#include<bits/stdc++.h>
#define x first
#define y second
using namespace std;

string str;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    while (1) {
        getline(cin, str);
        if (!str.compare("***")) break;
        reverse(str.begin(), str.end());
        cout << str << "\n";
    }
}