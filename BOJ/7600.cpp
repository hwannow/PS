#include<bits/stdc++.h>
#define x first
#define y second
using namespace std;

string str;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    while (1) {
        getline(cin, str);
        int arr[27] = { 0 }, cnt = 0;
        if (!str.compare("#")) break;

        transform(str.begin(), str.end(), str.begin(), ::toupper);
        for (int i = 0; i < str.length(); i++) {
            if (str[i] < 'A' || str[i] > 'Z') continue;
            if (!arr[str[i] - 'A']) cnt++;
            arr[str[i] - 'A']++;
        }
        cout << cnt << "\n";
    }


}