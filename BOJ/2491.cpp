#include<bits/stdc++.h>
#define x first
#define y second
#define INF 1e9
using namespace std;

int n, answer = 1;
int arr[100005];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int len = 1, len2 = 1;
    for (int i = 1; i < n; i++) {
        if (arr[i] <= arr[i - 1]) len++;
        else len = 1;

        if (arr[i] >= arr[i - 1]) len2++;
        else len2 = 1;

        answer = max(answer, len);
        answer = max(answer, len2);
    }

    cout << answer;
}