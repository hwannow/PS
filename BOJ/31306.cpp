#include<bits/stdc++.h>
#define x first
#define y second
using namespace std;

string str;
int answer = 0, y = 0;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    getline(cin, str);
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') answer++;
        else if (str[i] == 'y') y++;
    }

    cout << answer << " " << answer + y;
}