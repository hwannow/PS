#include<bits/stdc++.h>
#define x first
#define y second
using namespace std;

int arr[100005], n, b, a;
int ck_[100005];
int main() {
	int answer = 0;
	long long sum = 0;
	cin >> n >> b >> a;
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	sort(arr, arr + n);

	for (int i = 0; i < n; i++) {
		sum += arr[i];
		if (b >= sum) {
			answer = i + 1;
		}
		else {
			int ck = 0;
			for (int j = i; j >= 0; j--) {
				if (ck_[j]) continue;
				if (!a) break;
				sum -= arr[j] / 2;
				a--;
				ck_[j] = 1;
				if (b >= sum) {
					ck = 1;
					break;
				}
			}
			if (ck) answer = i + 1;
			else break;
		}
	}
	cout << answer;
}