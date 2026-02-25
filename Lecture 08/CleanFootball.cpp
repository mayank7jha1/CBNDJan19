#include<iostream>
using namespace std;


int main() {

	char ch;
	int Count0 = 0, Count1 = 0;

	int prev_character = -1;

	while (cin >> ch) {

		if (ch == '0') {
			if (prev_character == 0 or prev_character == -1) {

				Count0 += 1;
				if (Count0 >= 7) {
					cout << "Yes" << endl;
					return 0;
				}

			} else {
				Count0 = 1;

			}

			prev_character = 0;
		} else {

			if (prev_character == 1 or prev_character == -1) {

				Count1 += 1;
				if (Count1 >= 7) {
					cout << "Yes" << endl;
					return 0;
				}

			} else {
				Count1 = 1;
			}

			prev_character = 1;

		}

	}

	cout << "No" << endl;
}