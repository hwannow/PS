#include<bits/stdc++.h>
#define x first
#define y second
using namespace std;

int n;
string str, str2;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n;
    while (n--) {
        cin >> str >> str2;
        int arr[27] = { 0 }, arr2[27] = { 0 };

        for (int i = 0; i < str.length(); i++)
            arr[str[i] - 'a']++;

        for (int i = 0; i < str2.length(); i++)
            arr2[str2[i] - 'a']++;

        int ck = 1;
        for (int i = 0; i < 26; i++) {
            if (arr[i] != arr2[i]) ck = 0;
        }

        if (ck) cout << str << " & " << str2 << " are anagrams.\n";
        else cout << str << " & " << str2 << " are NOT anagrams.\n";
    }
}