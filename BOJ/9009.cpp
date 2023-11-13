#include<bits/stdc++.h>
#define x first
#define y second
using namespace std;

int n;
int f[46];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    f[0] = 1;
    f[1] = 2;

    for (int i = 2; i < 44; i++)
        f[i] = f[i - 1] + f[i - 2];
    cin >> n;
    while (n--) {
        int a;
        cin >> a;
        vector<int> result;

        for (int i = 43; i >= 0; i--) {
            if (f[i] <= a) {
                a -= f[i];
                result.push_back(f[i]);
            }
        }

        for (int i = result.size() - 1; i >= 0; i--) cout << result[i] << " ";
        cout << "\n";
    }
    return 0;

}