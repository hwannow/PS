#include<bits/stdc++.h>
//#define x first
//#define y second
using namespace std;

tuple<int, int, int> a;
int y, m, d;
int temp;

// 생일이 지났는지 확인
int f(int q, int w, int e, int r) {
    if (q < e) return 1;
    else if (q == e) {
        if (w <= r) return 1;
        else if (w > r) return 0;
    }
    else return 0;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> y >> m >> d;
    a = make_tuple(y, m, d);
    cin >> y >> m >> d;

    temp = y - get<0>(a);


    if (y > get<0>(a)) {
        if (f(get<1>(a), get<2>(a), m, d))  cout << temp;
        else cout << temp - 1;
    }
    else cout << temp;
    cout << "\n";

    cout << temp + 1 << "\n";

    cout << temp;
}