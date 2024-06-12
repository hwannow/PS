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
        int arr[10] = { 0 }, cnt = 0;

        for (int i = 0; i < str.length(); i++) {
            if (!arr[str[i] - '0']) cnt++;
            arr[str[i] - '0']++;
        }

        cout << cnt << "\n";
    }
}