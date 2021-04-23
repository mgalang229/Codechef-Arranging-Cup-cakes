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
		auto CheckPrime = [&](int x) {
			bool prime = true;
			for (int i = 2; i <= (int) sqrt(n); i++) {
				if (x % i == 0) {
					prime = false;
					break;
				}
			}
			return prime;
		};
		// there will be two conditions
		if(CheckPrime(n)) {
			// first, 'n' is a prime number
			// if it's a prime number, then simply get the difference of 'n' and 1
			cout << n - 1;
		} else {
			// second, 'n' is NOT a prime number (composite)
			int factor = -1;
			// find the biggest factor 'n' within the range of 2 to square root of 'n' (inclusive)
			for (int i = 2; i <= sqrt(n); i++) {
				if (n % i == 0) {
					factor = i;
				}
			}
			// find the other factor of 'n' by dividing it using the factor that
			// we got from the loop above, and calculate the difference
			cout << (n / factor) - factor;
		}
		cout << '\n';
	}
	return 0;
}
