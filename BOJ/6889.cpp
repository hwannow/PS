#include<bits/stdc++.h>
#define x first
#define y second
using namespace std;

int n, m;
vector<string> v1, v2;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        string str;
        cin >> str;
        v1.push_back(str);
    }

    for (int i = 0; i < m; i++) {
        string str;
        cin >> str;
        v2.push_back(str);
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++)
            cout << v1[i] << " as " << v2[j] << "\n";
    }

}