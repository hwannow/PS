#include<bits/stdc++.h>
#define x first
#define y second
using namespace std;

int a, b, c;
int arr[1001][1001];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> a >> b >> c;
    for (int i = 1; i <= a; i++) {
        for (int j = 1; j <= a; j++)cin >> arr[i][j];
    }

    int ck = 1;
    for (int i = 1; i <= a; i++) {
        if (arr[b][i] > arr[b][c]) ck = 0;
    }
    for (int i = 1; i <= a; i++) {
        if (arr[i][c] > arr[b][c]) ck = 0;
    }
    if (ck) cout << "HAPPY";
    else cout << "ANGRY";
}