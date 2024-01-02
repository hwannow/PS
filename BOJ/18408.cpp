#include<bits/stdc++.h>
#define x first
#define y second
#define INF 1e9
using namespace std;

int one = 0, two = 0;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int a;
    for (int i = 0; i < 3; i++) {
        cin >> a;
        if (a == 1) one++;
        else two++;
    }

    one < two ? cout << 2 : cout << 1;
}