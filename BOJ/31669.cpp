#include<bits/stdc++.h>
#define x first
#define y second
using namespace std;

int n, m, answer = -1;
int arr[104];
string str;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        cin >> str;
        for (int j = 0; j < m; j++) {
            if (str[j] == 'O') arr[j] = 1;
        }
    }

    for (int i = m - 1; i >= 0; i--) {
        if (!arr[i]) answer = i;
    }
    if (answer == -1) cout << "ESCAPE FAILED";
    else cout << answer + 1;
}