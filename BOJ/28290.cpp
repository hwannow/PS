#include<bits/stdc++.h>
#define x first
#define y second
using namespace std;

string str;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> str;
    if (!str.compare("fdsajkl;") || !str.compare("jkl;fdsa")) cout << "in-out";
    else if (!str.compare("asdf;lkj") || !str.compare(";lkjasdf")) cout << "out-in";
    else if (!str.compare("asdfjkl;")) cout << "stairs";
    else if (!str.compare(";lkjfdsa")) cout << "reverse";
    else cout << "molu";
}