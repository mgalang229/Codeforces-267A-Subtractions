#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int a, b;
		cin >> a >> b;
 		// let x = max(a, b) and y = min(a, b)
		// perform the following operations until a and b are both greater than 0:
		// add the quotient of x and y to the final answer
		// subtract the multiple of y (y * quotient) from x
		// update the new value of a and b
		// determine the max(a, b) and min(a, b) again
		int x = max(a, b);
		int y = min(a, b);
		int ans = 0;
		while (a > 0 && b > 0) {
			int quotient = x / y;
			ans += quotient;
			x -= (y * quotient);
			a = x;
			b = y;
			x = max(a, b);
			y = min(a, b);
		}
		cout << ans << '\n';
	}
	return 0;
}