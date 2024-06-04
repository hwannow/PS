#include<bits/stdc++.h>
#define x first
#define y second
using namespace std;

int n;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    while (1) {
        cin >> n;
        if (!n) break;
        string answer = "";

        while (n--) {
            cin.ignore();
            string str;
            cin >> str;

            string tmp1 = str, tmp2 = answer;
            transform(tmp1.begin(), tmp1.end(), tmp1.begin(), ::tolower);
            transform(tmp2.begin(), tmp2.end(), tmp2.begin(), ::tolower);


            if (answer == "" || tmp1 < tmp2)
                answer = str;
        }
        cout << answer << "\n";
    }
}