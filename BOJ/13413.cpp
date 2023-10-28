#include<bits/stdc++.h>
#define x first
#define y second
using namespace std;



int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t, n;
    int w = 0;
    int b = 0;
    cin >> t;
    while (t--)
    {
        string before;
        string after;
        cin >> n >> before >> after;
        for (int i = 0; i < n; i++)
        {
            if (after.at(i) != before.at(i))
            {
                if (before.at(i) == 'W')
                    w++;
                else
                    b++;
            }
        }
        if (w > b)
            cout << w << "\n";
        else
            cout << b << "\n";
        w = 0;
        b = 0;
    }
}