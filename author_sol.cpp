#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n;
		cin >> n;
		int ans = n - 1;
		for (int i = (int) sqrt(n); i > 1; i--) {
			if (n % i == 0) {
				int other_div = n / i;
				ans = other_div - i;
				break;
			}
		}
		cout << ans << '\n';
	}
	return 0;
}
