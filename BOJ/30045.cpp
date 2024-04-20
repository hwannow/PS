#include<bits/stdc++.h>
#define x first
#define y second
using namespace std;

int n, answer = 0;
string str;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> str;
        if (str.find("01") != string::npos) answer++;
        else if (str.find("OI") != string::npos) answer++;
    }

    cout << answer;
}