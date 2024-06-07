#include<bits/stdc++.h>
#define x first
#define y second
using namespace std;

long long n, m = 0, answer = 0;
string str;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n;
    cin >> str;

    for (int i = 0; i < str.length(); i++) {
        if (str[i] < '0' || str[i] > '9') {
            answer += m;
            m = 0;
        }
        else {
            m = m * 10 + str[i] - '0';
        }
    }
    if (m) answer += m;

    cout << answer;
}