#include<bits/stdc++.h>
#define x first
#define y second
using namespace std;

int n, m, Max = 0, cnt = 0;
string str;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> str;
        int ck = 0, tmp = 0;
        for (int j = 0; j < m; j++) {
            if (str[j] == '1') ck = 1;
            else {
                if (ck) tmp++; ck = 0;
            }
        }

        if (ck) tmp++;
        if (Max < tmp) {
            Max = tmp;
            cnt = 1;
        }
        else if (Max == tmp) cnt++;
    }

    cout << Max << " " << cnt;
}