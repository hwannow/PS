#include<bits/stdc++.h>
#define x first
#define y second
using namespace std;

string str;
int n, answer = 0;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> str;
    cin >> n;
    while (n--) {
        string tmp;
        cin >> tmp;
        if (!str.compare(tmp)) answer++;
    }
    cout << answer;
}