#include<bits/stdc++.h>
#define x first
#define y second
using namespace std;

char c;
string str;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    while (1) {
        int answer = 0;
        cin >> c; getchar();
        if (c == '#') break;
        getline(cin, str);
        char tmp = c - 'a' + 'A';
        for (int i = 0; i < str.length(); i++) {
            if (str[i] == c || str[i] == tmp) answer++;
        }
        cout << c << " " << answer << "\n";
    }
}