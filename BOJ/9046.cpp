#include<bits/stdc++.h>
#define x first
#define y second
using namespace std;

int n;
int arr[27] = { 0 };

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n;
    cin.ignore();
    while (n--) {
        memset(arr, 0, sizeof(arr));
        string str;
        getline(cin, str);

        for (int i = 0; i < str.length(); i++) {
            if (str[i] == ' ') continue;
            arr[str[i] - 'a']++;
        }

        vector<pair<int, char>> v;
        for (int i = 0; i < 26; i++)
            v.push_back({ arr[i], i + 'a' });

        sort(v.begin(), v.end(), greater<>());

        if (v[0].x == v[1].x) cout << "?\n";
        else cout << v[0].y << "\n";
    }
}