#include<bits/stdc++.h>
#define x first
#define y second
#define INF 1e9
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string str;
    const string NLCS = "North London Collegiate School";
    const string BHA = "Branksome Hall Asia";
    const string KIS = "Korea International School";
    const string SJA = "St. Johnsbury Academy";
    cin >> str;

    if (!str.compare("NLCS")) cout << NLCS;
    else if (!str.compare("BHA")) cout << BHA;
    else if (!str.compare("KIS")) cout << KIS;
    else if (!str.compare("SJA")) cout << SJA;
}