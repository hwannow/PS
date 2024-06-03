#include<bits/stdc++.h>
#define x first
#define y second
using namespace std;

int l = 0, o = 0, v = 0, e = 0, n;
string name, team[51], answer = "";
int Max = 0;

void count(char ch, int* a, int* b, int* c, int* d) {
    if (ch == 'L') (*a)++;
    else if (ch == 'O') (*b)++;
    else if (ch == 'V') (*c)++;
    else if (ch == 'E') (*d)++;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> name;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin.ignore();
        cin >> team[i];
    }

    for (int j = 0; j < name.length(); j++)
        count(name[j], &l, &o, &v, &e);

    for (int i = 0; i < n; i++) {
        int L = l, O = o, V = v, E = e;

        for (int j = 0; j < team[i].length(); j++)
            count(team[i][j], &L, &O, &V, &E);

        int ck = ((L + O) * (L + V) * (L + E) * (O + V) * (O + E) * (V + E)) % 100;
        if (ck > Max) {
            Max = ck;
            answer = team[i];
        }
        else if (ck == Max) {
            if (answer > team[i] || answer == "") {
                Max = ck;
                answer = team[i];
            }
        }
    }

    cout << answer;
}