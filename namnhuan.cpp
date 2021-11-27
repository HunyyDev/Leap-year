#include <iostream>

using namespace std;

long long n, ans = 0;

int main() {
	cin >> n;
	if (n % 4 != 0) {
		ans = 4 - (n + 4) % 4;
		n += ans;

	}
	if (n % 400 == 100 || n % 400 == 200 || n % 400 == 300) {
		ans += 4;
	}
	cout << ans;
	return 0;
}