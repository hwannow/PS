#include<bits/stdc++.h>
#define x first
#define y second
using namespace std;

int n;
string answer = "����?";
string str;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n;
    while (n--) {
        cin >> str;
        if (!str.compare("anj")) answer = "����;";
    }

    cout << answer;
}