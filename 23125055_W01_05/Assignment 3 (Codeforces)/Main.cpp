#include <iostream>
using namespace std;
int n, p1, p2, p3, t1, t2;

int main() {
	cin >> n >> p1 >> p2 >> p3 >> t1 >> t2;
	int curLeft = 0;
	int ans = 0;
	for (int l, r, i = 0; i < n; ++i) {
		cin >> l >> r;
		int temp = l - curLeft;
		if (i > 0) {
			if (temp <= t1) ans += (temp * p1);
			else ans += t1 * p1 + (temp <= t1 + t2 ? (temp - t1) * p2 : (t2 * p2 + (temp - t1 - t2) * p3));
		}
		ans += (r - l) * p1;
		curLeft = r;
	}
	cout << ans;
	return 0;
}