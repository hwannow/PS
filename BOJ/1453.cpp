#include <iostream>
using namespace std;

int n, arr[120], answer = 0;

int main() {
    cin >> n;
    for (int i = 0; i < n; i ++) {
        int a;
        cin >> a;
        if (arr[a]) answer++;
        else arr[a] = 1;
    }
    
    cout << answer;
}
