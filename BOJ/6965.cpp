#include<bits/stdc++.h>
#define x first
#define y second
using namespace std;

int n;

vector<string> split(string str, char Delimiter) {
    istringstream iss(str);
    string buffer;

    vector<string> result;

    while (getline(iss, buffer, Delimiter)) {
        result.push_back(buffer);
    }

    return result;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n;
    cin.ignore();
    while (n--) {
        string str;
        getline(cin, str);

        vector<string> v;
        v = split(str, ' ');

        for (int i = 0; i < v.size(); i++) {
            if (v[i].length() == 4) cout << "**** ";
            else cout << v[i] << " ";
        }
        cout << "\n\n";
    }
}