#include<bits/stdc++.h>
#define x first
#define y second
#define INF 1e9
using namespace std;

int n, visited[10];
char str[11];
vector<string> v;
int check(char ch, char a, char b) {
    if (ch == '<') return a < b;
    return b < a;
}

void func(int cnt, string num) {
    if (cnt == n + 1) {
        v.push_back(num);
        return;
    }

    for (int i = 0; i < 10; i++) {
        if (visited[i]) continue;
        visited[i] = 1;
        if (cnt == 0) func(cnt + 1, to_string(i));
        else if (check(str[cnt - 1], num[cnt - 1], i + '0')) func(cnt + 1, num + to_string(i));
        visited[i] = 0;
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> str[i];

    func(0, "");
    sort(v.begin(), v.end());

    cout << v[v.size() - 1] << "\n" << v[0];
}