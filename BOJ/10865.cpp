#include <iostream>
using namespace std;

int main() {
    int n, m;
    int arr[100005] ={0};
    cin >> n >> m;
    
for (int i =0; i<m;i++) {
int a, b;
    cin >> a >> b;
    arr[a]++;
    arr[b]++;
}
    for (int i =1;i<=n;i++) cout << arr[i] << "\n";
}
