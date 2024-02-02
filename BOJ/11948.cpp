#include<bits/stdc++.h>
#define x first
#define y second
using namespace std;

vector<int> v1, v2;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    for (int i = 0; i < 4; i++) {
        int a;
        cin >> a;
        v1.push_back(a);
    }
    sort(v1.begin(), v1.end());
    for (int i = 0; i < 2; i++) {
        int a;
        cin >> a;
        v2.push_back(a);
    }
    sort(v2.begin(), v2.end());

    int answer = 0;
    answer += v1[3] + v1[1] + v1[2] + v2[1];
    cout << answer;
}