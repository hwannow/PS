#include<bits/stdc++.h>
#define x first
#define y second
#define INF 1e9
using namespace std;

int n, idx = 0, ck = 1;
char arr[500][500];
string str;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n;
    cin >> str;

    for (int i = 0; i < str.size() / n; i++) {
        if (ck) {
            for (int j = 0; j < n; j++)
                arr[i][j] = str[idx++];
            ck = 0;
        }
        else {
            for (int j = n - 1; j >= 0; j--)
                arr[i][j] = str[idx++];
            ck = 1;
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < str.size() / n; j++)
            cout << arr[j][i];
    }
}