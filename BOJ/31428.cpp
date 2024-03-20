#include<bits/stdc++.h>
#define x first
#define y second
using namespace std;

int n, answer = 0;
vector<char> v;
char e;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n;
    for (int i = 0; i < n; i++) {
        char a;
        cin >> a;
        v.push_back(a);
    }

    cin >> e;

    for (int i = 0; i < n; i++) {
        if (v[i] == e) answer++;
    }
    cout << answer;
}