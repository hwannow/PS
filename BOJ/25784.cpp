#include<bits/stdc++.h>
#define x first
#define y second
using namespace std;

vector<int> v;
int answer = 3;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    for (int i = 0; i < 3; i++) {
        int a;
        cin >> a;
        v.push_back(a);
    }
    sort(v.begin(), v.end());

    if (v[0] + v[1] == v[2]) answer = 1;
    else if (v[0] * v[1] == v[2]) answer = 2;

    cout << answer;
}