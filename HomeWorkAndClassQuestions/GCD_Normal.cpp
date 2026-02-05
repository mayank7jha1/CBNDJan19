#include<iostream>
using namespace std;


int main() {
	int a, b;
	cin >> a >> b;

	if (a > b) {
		int c = a;
		a = b;
		b = c;
	}

	int gcd = 1, c = 2;

	while (c <= a) {
		if ((a % c) == 0 and (b % c) == 0) {
			gcd = c;
		}

		c += 1;
	}

	cout << gcd << endl;
}