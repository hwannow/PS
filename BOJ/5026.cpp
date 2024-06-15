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

        if (str == "P=NP") {
            cout << "skipped\n";
            continue;
        }

        int a = 0, b = 0, ck = 1;

        for (int i = 0; i < str.length(); i++) {
            if (str[i] == '+') {
                ck = 0; continue;
            }
            if (ck) a = a * 10 + str[i] - '0';
            else b = b * 10 + str[i] - '0';
        }

        cout << a + b << "\n";
    }
}