// https://cses.fi/problemset/task/1083

#include<iostream>
using namespace std;


int main() {

	int n;
	cin >> n;

	int sum = 0;
	int ans = (n * (n + 1)) / 2;

	int c = 1;

	while (c <= n - 1) {
		int x;
		cin >> x;
		sum += x;
		c += 1;
	}

	cout << ans - sum << endl;


}