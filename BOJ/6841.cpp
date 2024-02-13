#include<bits/stdc++.h>
#define x first
#define y second
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    while (1) {
        string str;
        cin >> str;
        if (!str.compare("CU")) cout << "see you\n";
        else if (!str.compare(":-)")) cout << "I¡¯m happy\n";
        else if (!str.compare(":-(")) cout << "I¡¯m unhappy\n";
        else if (!str.compare(";-)")) cout << "wink\n";
        else if (!str.compare(":-P")) cout << "stick out my tongue\n";
        else if (!str.compare("(~.~)")) cout << "sleepy\n";
        else if (!str.compare("TA")) cout << "totally awesome\n";
        else if (!str.compare("CCC")) cout << "Canadian Computing Competition\n";
        else if (!str.compare("CUZ")) cout << "because\n";
        else if (!str.compare("TY")) cout << "thank-you\n";
        else if (!str.compare("YW")) cout << "you¡¯re welcome\n";
        else if (!str.compare("TTYL")) {
            cout << "talk to you later";
            break;
        }
        else cout << str << "\n";
    }
}