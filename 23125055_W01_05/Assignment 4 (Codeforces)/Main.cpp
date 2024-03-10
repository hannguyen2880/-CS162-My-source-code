#include<iostream>
using namespace std;
#define FOr(i, a, b) for (int i = a, _b = b; i < _b; ++i)
#define FOR(i, a, b) for (int i = a, _b = b; i <= _b; ++i)
int n, d;

int main() {
	cin >> n >> d;
	int x, ans = 0;
	cin >> x;
	int cur = x;
	FOr(i, 0, n - 1) {
		cin >> x;
		if (x <= cur) {
			ans += ((cur - x) / d + 1);
			//cout << i << " "  << ans << endl;
			cur = x + ((cur - x) / d + 1) * d;
		}
		else {
			cur = x;
		}
	}
	cout << ans;
	return 0;
}