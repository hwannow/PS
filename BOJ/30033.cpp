#include<bits/stdc++.h>
#define x first
#define y second
using namespace std;

int n, a, answer = 0;
int arr[1001];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    for (int i = 0; i < n; i++) {
        cin >> a;
        if (arr[i] <= a) answer++;
    }

    cout << answer;
}