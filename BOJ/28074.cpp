#include<bits/stdc++.h>
#define x first
#define y second
using namespace std;

char str[101], ck[5];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> str;
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == 'M') ck[0] = 1;
        else if (str[i] == 'O') ck[1] = 1;
        else if (str[i] == 'B') ck[2] = 1;
        else if (str[i] == 'I') ck[3] = 1;
        else if (str[i] == 'S') ck[4] = 1;
    }

    for (int i = 0; i < 5; i++) {
        if (!ck[i]) {
            cout << "NO";
            return 0;
        }
    }

    cout << "YES";
}