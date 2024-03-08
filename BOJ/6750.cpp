#include<bits/stdc++.h>
#define x first
#define y second
using namespace std;

string str, answer = "YES";

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    vector<char> v;
    v.push_back('I');
    v.push_back('O');
    v.push_back('S');
    v.push_back('H');
    v.push_back('Z');
    v.push_back('X');
    v.push_back('N');



    getline(cin, str);
    for (int i = 0; i < str.length(); i++) {
        if (find(v.begin(), v.end(), str[i]) == v.end()) {
            answer = "NO"; break;
        }
    }
    cout << answer;
}