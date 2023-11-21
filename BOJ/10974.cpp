#include<bits/stdc++.h>
#define x first
#define y second
#define INF 1e9
using namespace std;

int n;
int board[9];
vector<int> v;

void func(int cnt) {
    if (cnt == n) {
        for (int i = 0; i < n; i++) cout << v[i] << " ";
        cout << "\n";
        return;
    }

    for (int i = 0; i < n; i++) {
        if (board[i] == 1) continue;
        board[i] = 1;
        v.push_back(i + 1);
        func(cnt + 1);
        board[i] = 0;
        v.pop_back();
    }
    return;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n;
    func(0);
}