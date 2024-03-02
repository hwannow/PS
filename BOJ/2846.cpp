#include<bits/stdc++.h>
#define x first
#define y second
using namespace std;

int n, answer = 0, Start = 0, End = 0;
vector<int> v;

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

    for (int i = 1; i < n; i++) {
        if (v[i] > v[i - 1]) End = i;
        else {
            answer = max(answer, v[End] - v[Start]);
            Start = i; End = i;
        }
    }
    answer = max(answer, v[End] - v[Start]);

    cout << answer;
}