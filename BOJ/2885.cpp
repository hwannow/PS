#include<bits/stdc++.h>
#define x first
#define y second
using namespace std;


int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int k;
	cin >> k;

	int ansSize = 1, splitCnt = 0, cnt = 0, temp = 0, cSize = 0, oneCnt = 0;

	while (ansSize < k) {
		int i = 1;
		ansSize <<= i;
	}
	cSize = k; temp = ansSize;
	for (; k != 0; cnt++) {
		k &= (k - 1);
	}

	while (cnt != oneCnt) {
		if ((cSize & temp) != 0)
			oneCnt++;
		splitCnt++;
		temp >>= 1;
	}
	cout << ansSize << ' ' << splitCnt - 1 << '\n';
	return 0;
}