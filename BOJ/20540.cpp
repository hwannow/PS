#include<bits/stdc++.h>
#define x first
#define y second
using namespace std;

string str;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> str;
    if (str[0] == 'E') str[0] = 'I';
    else str[0] = 'E';

    if (str[1] == 'S') str[1] = 'N';
    else str[1] = 'S';

    if (str[2] == 'T') str[2] = 'F';
    else str[2] = 'T';

    if (str[3] == 'J') str[3] = 'P';
    else str[3] = 'J';

    cout << str;
}