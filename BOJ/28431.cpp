#include<bits/stdc++.h>
#define x first
#define y second
using namespace std;

int arr[10];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    for (int i = 0; i < 5; i++) {
        int a;
        cin >> a;
        if (arr[a] == 1) arr[a] = 0;
        else arr[a] = 1;
    }

    for (int i = 0; i < 10; i++) {
        if (arr[i] == 1) {
            cout << i;
            break;
        }
    }
}