// https://cses.fi/problemset/task/1068

#include<iostream>
using namespace std;


int main() {

	int w;
	cin >> w;
	cout << w << " ";

	while (w != 1) {

		if (w % 2 == 0) {
			w /= 2;
		} else {
			w = 3 * w + 1;
		}

		cout << w << " ";
	}

}