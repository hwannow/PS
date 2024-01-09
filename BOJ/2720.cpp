#include<bits/stdc++.h>
#define x first
#define y second
using namespace std;

int n;
int quarter = 0, dime = 0, nickel = 0, penny = 0;
// 25 10 5 1

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n;
    while (n--) {
        int a;
        cin >> a;
        quarter = 0, dime = 0, nickel = 0, penny = 0;

        while (a >= 25) {
            quarter++;
            a -= 25;
        }
        while (a >= 10) {
            dime++;
            a -= 10;
        }
        while (a >= 5) {
            nickel++;
            a -= 5;
        }
        while (a >= 1) {
            penny++;
            a -= 1;
        }

        cout << quarter << " " << dime << " " << nickel << " " << penny << "\n";
    }
}