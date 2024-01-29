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

    cin >> n >> str;

    for (int i = n - 5; i < n; i++)
        cout << str[i];
}