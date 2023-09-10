#include<bits/stdc++.h>
#define x first
#define y second
using namespace std;

int solution(vector<int> arr, int total) {
    int cnt = 0;

    sort(arr.begin(), arr.end(), greater<>());

    for (auto now : arr) {
        total -= now;
        cnt++;
        if (total <= 0) break;
    }

    return cnt;
}

int main() {
    ios::sync_with_stdio(0);
    int test; cin >> test;

    while (test--) {
        int total, box; cin >> total >> box;
        vector<int> arr;

        for (int i = 0; i < box; i++) {
            int x, y; cin >> x >> y;
            arr.push_back(x * y);
        }

        cout << solution(arr, total) << endl;
    }

    return 0;
}