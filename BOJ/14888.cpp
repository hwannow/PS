#include<bits/stdc++.h>
#define x first
#define y second
#define INF 1e9
using namespace std;

int n;
int MAX = -INF;
int MIN = INF;
vector<int> v;
int oper[4];

void func(int cnt, int num) {
    if (cnt == n) {
        if (num > MAX) MAX = num;
        if (num < MIN) MIN = num;
        return;
    }
    for (int i = 0; i < 4; i++) {
        if (oper[i] <= 0) continue;
        oper[i]--;
        if (i == 0) func(cnt + 1, num + v[cnt]);
        else if (i == 1) func(cnt + 1, num - v[cnt]);
        else if (i == 2) func(cnt + 1, num * v[cnt]);
        else func(cnt + 1, num / v[cnt]);
        oper[i]++;
    }
    return;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        v.push_back(a);
    }
    for (int i = 0; i < 4; i++)
        cin >> oper[i];


    func(1, v[0]);
    cout << MAX << "\n" << MIN;
}