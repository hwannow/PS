#include<bits/stdc++.h>
#define x first
#define y second
using namespace std;

vector<int> v;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    for (int i = 0; i < 10; i++) {
        int a;
        cin >> a;
        v.push_back(a);
    }

    int answer = 0;
    for (int i = 0; i < 10; i++) {
        if (answer + v[i] <= 100) answer += v[i];
        else {
            if (100 - answer >= answer + v[i] - 100)  answer += v[i];
            else break;
        }
    }
    cout << answer;
}