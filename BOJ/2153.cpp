#include<bits/stdc++.h>
#define x first
#define y second
using namespace std;

string str;
int sum = 0;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    getline(cin, str);

    for (int i = 0; i < str.length(); i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') sum += str[i] - 'A' + 27;
        else sum += str[i] - 'a' + 1;
    }

    int cnt = 0;
    for (int i = 1; i <= sum; i++) {
        if (sum % i == 0) cnt++;
    }

    if (cnt == 2 || sum == 1) cout << "It is a prime word.";
    else cout << "It is not a prime word.";
}