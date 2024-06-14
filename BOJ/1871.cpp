#include<bits/stdc++.h>
#define x first
#define y second
using namespace std;

int n;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n;
    while (n--) {
        string str;
        cin >> str;
        int al = (str[0] - 'A') * 26 * 26 + (str[1] - 'A') * 26 + str[2] - 'A';
        int num = 0;
        for (int i = 4; i <= 7; i++)
            num = num * 10 + str[i] - '0';

        int diff = abs(al - num);

        if (diff <= 100) cout << "nice\n";
        else cout << "not nice\n";
    }
}