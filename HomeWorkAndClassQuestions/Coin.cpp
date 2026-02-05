// https://cses.fi/problemset/task/1754


#include<iostream>
using namespace std;


int main() {

	int t;
	cin >> t;
	int c = 1;
	while (c <= t) {
		int a, b;
		cin >> a >> b;

		if (a > b) {
			int temp = a;
			a = b;
			b = temp;
		}


		if ((a + b) % 3 == 0 and (b <= 2 * a)) {
			cout << "Yes" << endl;
		} else {
			cout << "No" << endl;
		}


		c += 1;
	}

}