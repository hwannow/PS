#include<bits/stdc++.h>
#define x first
#define y second
using namespace std;

string str;
string HAPPY = ":-)", SAD = ":-(";
int happy = 0, sad = 0;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    getline(cin, str);

    size_t pos = str.find(HAPPY);

    while (pos != string::npos) {
        happy++;
        pos = str.find(HAPPY, pos + HAPPY.length());
    }

    size_t pos2 = str.find(SAD);

    while (pos2 != string::npos) {
        sad++;
        pos2 = str.find(SAD, pos2 + SAD.length());
    }

    if (!happy && !sad) cout << "none";
    else if (happy == sad) cout << "unsure";
    else if (happy > sad) cout << "happy";
    else cout << "sad";
}