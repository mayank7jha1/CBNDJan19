//https://codeforces.com/problemset/problem/231/A

#include<iostream>
using namespace std;


int main() {

	int n;
	cin >> n;

	int c = 1;
	int ans = 0;

	// int sum = 0; As discussed in class can write this but not necessary.

	while (c <= n) {
		int x, y, z;
		cin >> x >> y >> z;

		int sum = x + y + z;

		if (sum >= 2) {
			ans += 1;
		}

		c += 1;
	}

	cout << ans << endl;
}