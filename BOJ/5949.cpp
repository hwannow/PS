#include <iostream>
using namespace std;

int th = 0;

int main() {
    string str;
    cin >> str;
    
    int len = str.length();
    len %= 3;
    
    for (int i = 0; i < len; i++)
        cout << str[i];
    if (len && str.length() > 3) cout << ",";
    
    for (int i = len; i < str.length(); i++) {
        th++;
        cout<< str[i];
        if (th == 3 && i != str.length() - 1) {
            cout << ",";
            th = 0;
        }
    }
}
