#include<bits/stdc++.h>
#define x first
#define y second
using namespace std;

string str1, str2;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> str1 >> str2;
    long long len = str1.length(), i;

    for (i = 0; i < len; i++) {
        if (str1[i] < str2[i]) cout << str2[i];
        else cout << str1[i];
    }
}