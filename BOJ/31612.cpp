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
    cin >> str;

    for (int i = 0; i < n; i++) {
        if (str[i] == 'j' || str[i] == 'i') answer += 2;
        else answer += 1;
    }

    cout << answer;
}