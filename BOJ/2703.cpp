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
    cin.ignore();

    while (n--) {
        string str, str2;
        getline(cin, str);
        getline(cin, str2);

        for (int j = 0; j < str.length(); j++) {
            if (str[j] == ' ') cout << " ";
            else cout << str2[str[j] - 'A'];
        }
        cout << "\n";
    }
}