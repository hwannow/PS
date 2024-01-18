#include<bits/stdc++.h>
#define x first
#define y second
using namespace std;

int n, a, b, c;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> a >> b >> c;

    int answer = 0;

    answer += n < a ? n : a;
    answer += n < b ? n : b;
    answer += n < c ? n : c;

    cout << answer;
}